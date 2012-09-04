#include <ruby.h>

VALUE mBase;

VALUE base_self_const_missing(VALUE self, VALUE name)
{
    return self;
}

VALUE base_self_all_modules(VALUE self)
{
    return self;
}

VALUE base_self_method_missing(int argc, VALUE *argv, VALUE self)
{
    return self
}

void Init_base(void)
{
    mBase = rb_define_module("Base");
    rb_define_singleton_method(mBase, "const_missing", base_self_const_missing, 1);
    rb_define_singleton_method(mBase, "all_modules", base_self_all_modules, 0);
    rb_define_method(mBase, "method_missing", base_self_all_modules, -1);
}
