#-----------------------------------------------------------------
# rec is the receiver object
#-----------------------------------------------------------------

struct rec 
:
    int nr; # No of receivers
    int [*] rx;    # Receiver x-postions
    int [*] ry;    # Receiver y-postions 
    int fd;        # Snapshot output file descriptor
    int nt;        # No of time samples
    float [*,*] p;   # Pressure p[i,j] at time sample no j at position no i
    float [*,*] sxx; # Stress sxx[i,j] at time sample no j at position no i
    float [*,*] syy; # Stress syy[i,j] at time sample no j at position no i
    float [*,*] vx;  # Velocity vx[i,j]  at time sample no j at position no i
    float [*,*] vy;  # Velocity vy[i,j]  at time sample no j at position no i
    float [*,*] wrk; # Work array
    int   resamp;  # Resample factor for receivers
    int pit;       # Next time sample to be recorded
end

#
# RecNew is the constructor for receivers.
# The return value is a Rec object
#
struct rec RecNew(int [*] rx, int [*] ry, int nt, int resamp):end
#
# RecReciver records data at the receivers
#
int RecReceiver(struct rec Rec,int it,float [*,*] sxx,float [*,*] syy,
                                      float [*,*] vx,float [*,*] vy):end
#
# Recsave stores receiver recording on file
#
int RecSave(struct rec Rec, char [*] file):end

float [*,*] RecGetrec(struct rec Rec, int dtype):end
