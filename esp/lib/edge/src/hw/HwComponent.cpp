#include "HwComponent.h"

HwComponent::HwComponent(char selected_pin) {
  pin_ = selected_pin;
}

char HwComponent::pin() const {
	return pin_;
}