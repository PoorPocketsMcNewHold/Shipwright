#include "SetLightList.h"

namespace LUS {
void* SetLightList::GetPointer() {
    return lightList.data();
}

size_t SetLightList::GetPointerSize() {
	return lightList.size() * sizeof(LightInfo);
}
} // namespace LUS
