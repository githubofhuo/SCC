
typedef void(func_t)(void);

void func(void)
{

}

static func_t f;

int c = sizeof(f);

int main(void)
{
    
    return 0;
}

