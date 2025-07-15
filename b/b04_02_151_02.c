BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040215102_02_000");
MsgDisp("Sassa","Huh? It's not going where I'm aiming.");
MsgSel("It's just one of those days","Is your form off?","I'll win today!");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040215102_02_010");
        MsgDisp("Sassa","No, there must be a reason.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4,1);
        VoicePlay("B040215102_02_020");
        MsgDisp("Sassa","I won't be content with that.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040215102_02_030");
        MsgDisp("Sassa","Sorry sorry, I've just hit a bit of a
wall. It's pretty crap if I'm bad at even
bowling.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040215102_02_040");
        MsgDisp("Sassa","Recently, I feel like I can't control my
body perfectly.");
        MsgDisp("主人公","I see.
Sorry for saying something so careless.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,5);
        VoicePlay("B040215102_02_050");
        MsgDisp("Sassa","No, I'm the one who should apologize.
Even though this was supposed to be a
date.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,5);
        VoicePlay("B040215102_02_060");
        MsgDisp("Sassa","But, I think this has given me a bit of a
hint.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040215102_02_070");
        MsgDisp("Sassa","You said \"It's just one of those days\".");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040215102_02_080");
        MsgDisp("Sassa","Temperature and humidity can easily change
things by 0.01 seconds or 1 millimeter.
Look, my hair's curling up from the
humidity.");
        MsgDisp("主人公","Hehe, yeah.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040215102_02_090");
        MsgDisp("Sassa","That's why, if I'm only looking for the
cause in my own body, I'll be in deep
trouble.");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040215102_02_100");
        MsgDisp("Sassa","Thanks to you, I think I've found a
breakthrough.");
        MsgDisp("主人公","I didn't do anything though?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040215102_02_110");
        MsgDisp("Sassa","It was far from doing nothing, to me,
you're the world's best coach.");
        MsgDisp("主人公","(Even if it was just a little bit, I'm
happy to to think that I helped
｛颯砂＊＊｝ )");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("B040215102_02_120");
    MsgDisp("Sassa","Is that right?
I didn't notice/");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040215102_02_130");
    MsgDisp("Sassa","Well, I wonder if it'll turn out that way?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
