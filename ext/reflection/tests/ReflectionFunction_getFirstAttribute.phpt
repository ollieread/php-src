--TEST--
ReflectionFunction::getFirstAttribute()
--FILE--
<?php
#[Attribute(Attribute::TARGET_FUNCTION | Attribute::IS_REPEATABLE)]
class AnAttribute {
    public function __construct(public readonly string $value) {}
}

#[AnAttribute('first'), AnAttribute('second')]
function foo() {}

$function = new ReflectionFunction('foo');
$attribute = $function->getFirstAttribute(AnAttribute::class);
var_dump($attribute);
var_dump($attribute->newInstance()->value);

$function = new ReflectionFunction('foo');
var_dump($function->getFirstAttribute(Stringable::class));
?>
--EXPECT--
object(ReflectionAttribute)#2 (0) {
}
string(5) "first"
NULL
