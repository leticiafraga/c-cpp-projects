Object **MyUnitTests()
{
    Object **toys = new Object *[2];

    toys[0] = new LittlePony("happy pony");
    toys[1] = new Teddy("cuddles");
    return toys;
}