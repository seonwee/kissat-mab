#ifndef _bump_h_INCLUDED
#define _bump_h_INCLUDED

struct kissat;

void kissat_bump_variables (struct kissat *);
void kissat_bump_chb (struct kissat *, unsigned idx, double multiplier);
void kissat_decay_chb (struct kissat *);
void kissat_update_conflicted_chb (struct kissat *);

void kissat_decay_lrb(struct kissat* solver);
void kissat_update_participate_lrb(struct kissat* solver);
void kissat_update_reasoned_lrb(struct kissat* solver, unsigned idx);
void kissat_bump_lrb(struct kissat* solver, unsigned idx);

#define MAX_SCORE 1e150

#endif
