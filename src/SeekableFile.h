#ifndef SOP_LINUX_PROJECT_SEQUENTIALFILE_H
#define SOP_LINUX_PROJECT_SEQUENTIALFILE_H

#include "SequentialFile.h"

class SeekableFile : public SequentialFile {
private:
    off_t position = 0;

public:
    off_t seek(off_t offset, int whence, int fd = -1);
};


#endif //SOP_LINUX_PROJECT_SEQUENTIALFILE_H
