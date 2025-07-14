BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040209002_02_000");
MsgDisp("Sassa","When I come here, I can't help but think
of salad.");
MsgSel("Are you hungry?","Vegetables are important huh?","You can't eat the grass here.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040209002_02_010");
    MsgDisp("Sassa","No, not that it looks delicious or
anything.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040209002_02_020");
    MsgDisp("Sassa","Right!
My target is 350 grams a day.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040209002_02_030");
        MsgDisp("Sassa","Eat it?
I'm not a cow.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040209002_02_040");
        MsgDisp("Sassa","I won't eat it!
There's no dressing.");
        MsgDisp("主人公","Is that what's bothering you?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040209002_02_050");
        MsgDisp("Sassa","But the way you described \"The grass here\"
is basically the main reason.");
        MsgDisp("主人公","Hehe, that's right.
Does ｛颯砂＊＊｝ like salad?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040209002_02_060");
        MsgDisp("Sassa","Vegetables help with nutrition, and at
least, are very important to athletes.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040209002_02_070");
        MsgDisp("Sassa","Ah, but if you made them at home, I would
eat lots of it.");
        MsgDisp("主人公","Homegrown vegetables?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040209002_02_080");
        MsgDisp("Sassa","You know, like Mikage-sensei?
He cooks with vegetables.");
        MsgDisp("主人公","I see.
I'll try studying up on cooking then.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        ChCheek(2,10);
        VoicePlay("B040209002_02_090");
        MsgDisp("Sassa","............");
        MsgDisp("主人公","｛颯砂＊＊｝?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040209002_02_100");
        MsgDisp("Sassa","Aah, sorry, sorry.
You would look nice with an apron and
kerchief.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040209002_02_110");
        MsgDisp("Sassa","It's nothing!
Hey, let's go quickly see the grass!");
        MsgDisp("主人公","(Was he imagining something...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
