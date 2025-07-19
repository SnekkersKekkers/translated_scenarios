BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,2);
VoicePlay("B040521302_05_000");
MsgDisp("Hiiragi","The lint roller is very useful here.");
MsgSel("Lint roller?","Shedding season must be difficult...","It seems worthwhile!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040521302_05_010");
    MsgDisp("Hiiragi","It's an exceptional cleaning goods item.
It cleans off any cat and dog fur stuck to
the carpet.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,0);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040521302_05_020");
        MsgDisp("Hiiragi","That feels good right?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040521302_05_030");
        MsgDisp("Hiiragi","No no, that's the fun part.");
        ChEyeOpenLevel(5,0);
        VoicePlay("B040521302_05_040");
        MsgDisp("Hiiragi","After the lint roller passes through, a
clean carpet appears.");
        ChEyeOpenLevel(5,#1);
        MsgDisp("主人公","Hehe, ｛柊＊＊＊｝, do you like cleaning?");
        ChEye(5,3);
        ChMotion(5,0);
        VoicePlay("B040521302_05_050");
        MsgDisp("Hiiragi","I'm not sure.
But, it feels nice to see something clean.");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040521302_05_060");
        MsgDisp("Hiiragi","Even if you try your best, there are many
things in this world that don't get tidied
up.");
        MsgDisp("主人公","｛柊＊＊＊｝, doing both school and the
theatre company must be difficult...");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040521302_05_070");
        MsgDisp("Hiiragi","Yes, it is difficult.
But, I have people who support and
encourage me.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040521302_05_080");
        MsgDisp("Hiiragi","That's you.
That's right, to me you are my lint
roller.");
        MsgDisp("主人公","Lint roller?");
        ChEye(5,3);
        ChMotion(5,4);
        VoicePlay("B040521302_05_090");
        MsgDisp("Hiiragi","Yes, no matter what problem I have, you
seem to resolve it neatly.");
        MsgDisp("主人公","(I want ｛柊＊＊＊｝ to depend on me
but...
Lint roller?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040521302_05_100");
    MsgDisp("Hiiragi","Right!
I want to help with my own lint roller.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
