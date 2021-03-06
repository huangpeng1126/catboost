#include "train_template.h"
#include <catboost/cuda/targets/pair_logit_pairwise.h>

namespace NCatboostCuda {
    using TTPairwisePaitLogitTrainer = TPairwiseGpuTrainer<TPairLogitPairwise>;
    TGpuTrainerFactory::TRegistrator<TTPairwisePaitLogitTrainer> PairwisePairLogitRegistratort(ELossFunction::PairLogitPairwise);
}
