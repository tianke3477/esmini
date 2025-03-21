
#include "esminiLib.hpp"
#include "RoadManager.hpp"

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    SE_Init("../resources/xosc/cut-in.xosc", 0, 0, 0, 0);

    roadmanager::OpenDrive* odr = static_cast<roadmanager::OpenDrive*>(SE_GetODRManager());

    printf("OpenDRIVE filepath: %s\n", odr->GetOpenDriveFilename().c_str());
    printf("NumberOfRoads: %d\n", odr->GetNumOfRoads());

    for (unsigned int i = 0; i < odr->GetNumOfRoads(); i++)
    {
        printf("Road[i] ID: %d\n", odr->GetRoadByIdx(i)->GetId());
        printf("Road[i] nrOfLanes (at s=0): %d\n", odr->GetRoadByIdx(i)->GetNumberOfLanes(0));
    }

    SE_Close();

    return 0;
}
