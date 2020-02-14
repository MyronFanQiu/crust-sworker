#ifndef _CRUST_VALIDATE_STATUS_H_
#define _CRUST_VALIDATE_STATUS_H_

#define VALIDATE_MK_ERROR(x) (0x00000000 | (x))

enum ValidationStatus
{
    ValidateStop = 0,
    ValidateWaiting = 1,
    ValidateMeaningful = 2,
    ValidateEmpty = 3
};

typedef enum _validate_status_t
{
    VALIDATION_SUCCESS = VALIDATE_MK_ERROR(0),
    VALIDATION_GET_PLOT_DATA_FAILED = VALIDATE_MK_ERROR(201),
    VALIDATION_STORE_PLOT_DATA_FAILED = VALIDATE_MK_ERROR(301),
    VALIDATION_REPORT_SIGN_FAILED = VALIDATE_MK_ERROR(400),
    VALIDATION_SEAL_DATA_FAILED = VALIDATE_MK_ERROR(401),
    VALIDATION_UNSEAL_DATA_FAILED = VALIDATE_MK_ERROR(402),
    VALIDATION_INVALID_ROOT_HASH = VALIDATE_MK_ERROR(403),
    PLOT_GET_DATA_FROM_FILE_FAILED = VALIDATE_MK_ERROR(500),
} validate_status_t;

#endif /* !_CRUST_VALIDATE_STATUS_H_ */
