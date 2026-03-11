MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("B040502302_05_000");
MsgDisp("Hiiragi","No matter when I come here, this place
always has such a unique atmosphere.");
MsgSel("Those mushrooms look so fantastical, huh","This really is a trichromatic world","It blends right into the blue of the sea");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040502302_05_010");
        MsgDisp("Hiiragi","Is it definitely a mushroom?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,5);
        VoicePlay("B040502302_05_020");
        MsgDisp("Hiiragi","Haha.
You really are an interesting person.");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040502302_05_030");
        MsgDisp("Hiiragi","You won't know if it's a mushroom unless
you ask the artist");
        MsgDisp("主人公","Ah, that's right.
My apologies.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040502302_05_040");
        MsgDisp("Hiiragi","No need to apologize.
They are your impressions after all.
Just don't be too certain.");
        ChEye(5,0);
        ChMotion(5,4);
        VoicePlay("B040502302_05_050");
        MsgDisp("Hiiragi","I suppose the artist's intention was to
evoke different images in the people
looking at it.");
        MsgDisp("主人公","I see.
Then, what do you think it is,
｛Hiiragi＊＊＊｝?");
        ChEye(5,2);
        ChMotion(5,1);
        VoicePlay("B040502302_05_060");
        MsgDisp("Hiiragi","...Now all I can see today is a mushroom.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040502302_05_070");
        MsgDisp("Hiiragi","This is your doing.
Please take some responsibility.");
        MsgDisp("主人公","Ehh?");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040502302_05_080");
        MsgDisp("Hiiragi","Hehe.
I wonder why I have so much fun when I'm
with you.");
        MsgDisp("主人公","(｛Hiiragi＊＊＊｝, you laughed a lot today.
I'm somewhat happy...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040502302_05_090");
    MsgDisp("Hiiragi","You're really into this, aren't you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040502302_05_100");
    MsgDisp("Hiiragi","I see, the spirit of borrowed scenery...
The artist made the background sea part of
their work's world.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
