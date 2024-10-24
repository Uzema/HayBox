#ifndef _MODES_RIVALS2_HPP
#define _MODES_RIVALS2_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

typedef struct {
    bool crouch_walk_os = false;
} Rivals2Options;

class Rivals2 : public ControllerMode {
  public:
    Rivals2(socd::SocdType socd_type, Rivals2Options options = {});

  protected:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);

  private:
    Rivals2Options _options;
    bool _horizontal_socd;

    void HandleSocd(InputState &inputs);
};

#endif
