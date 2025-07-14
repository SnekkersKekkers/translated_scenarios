BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040510102_05_000");
MsgDisp("Hiiragi","No matter when I come to see it, it's a
splendid museum.
It's evidence of love for the citizens.");
MsgSel("｛柊＊＊＊｝ is also a Habataki citizen.","That sofa looks soft and fluffy.","This museum has been looking after me since the elementary school trips.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040510102_05_010");
    MsgDisp("Hiiragi","Thank you.
I'm happy to hear you say that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040510102_05_020");
    MsgDisp("Hiiragi","Umm... are you already tired?");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,2);
        VoicePlay("B040510102_05_030");
        MsgDisp("Hiiragi","That's right.
You must be tired of looking at it
already....");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,2);
        VoicePlay("B040510102_05_040");
        MsgDisp("Hiiragi","That's right.
I'm guessing you've come many times
already?");
        MsgDisp("主人公","But it's different to when I came here in
elementary school.
As the exhibits are different too.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040510102_05_050");
        MsgDisp("Hiiragi","You're a kind person.");
        ChMotion(5,4);
        VoicePlay("B040510102_05_060");
        MsgDisp("Hiiragi","...I'm guessing you were cute as an
elementary school student.");
        MsgDisp("主人公","...Were?");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040510102_05_070");
        MsgDisp("Hiiragi","Is that what you're caught up about?");
        MsgDisp("主人公","Hehe, sorry.");
        ChEye(5,4);
        ChMouth(5,4);
        VoicePlay("B040510102_05_080");
        MsgDisp("Hiiragi","I wish I could've come with you in
elementary school? But If I think about
it, it's more interesting now.");
        MsgDisp("主人公","...Interesting?");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,4);
        VoicePlay("B040510102_05_090");
        MsgDisp("Hiiragi","We won't get any further like this in
conversation.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040510102_05_100");
        MsgDisp("Hiiragi","Haa, well at the end of the day, I like
the you now.
...Is that okay?");
        MsgDisp("主人公","(Umm, 
I'm happy but it's embarrassing.)");
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
