BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040603302_06_000");
MsgDisp("Himuro","The ocean that we see is only just one
part of it...");
MsgSel("Oh, that's a good point!","What's with this all of a sudden...?","You could say that about other things too");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040603302_06_010");
    MsgDisp("Himuro","It's not really a good point even?
I was just stating a fact.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040603302_06_020");
        MsgDisp("Himuro","No need to be 
taken so aback?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040603302_06_030");
        MsgDisp("Himuro","To think that there's a world like this at
the bottom of the ocean I visit so often
it's kind of scary.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,0);
        VoicePlay("B040603302_06_040");
        MsgDisp("Himuro","And... that goes for you too.");
        MsgDisp("主人公","Eh, me?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040603302_06_050");
        MsgDisp("Himuro","You're always grinning ear to ear, but
what if actually, you feel completely
differently?");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,0,1);
        VoicePlay("B040603302_06_060");
        MsgDisp("Himuro","What if somewhere I can't see, my words
and actions angered you, made you upset...");
        ChEye(6,2);
        ChMouth(6,2);
        ChMotion(6,2);
        VoicePlay("B040603302_06_070");
        MsgDisp("Himuro","I would lose all sort of 
confidence.");
        MsgDisp("主人公","｛氷室＊＊｝...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040603302_06_080");
        MsgDisp("Himuro","That's why if there's something wrong, I
don't want you to hide it.");
        MsgDisp("主人公","Yeah.
I'll be sure to properly tell you.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040603302_06_090");
        MsgDisp("Himuro","Do that.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040603302_06_100");
        MsgDisp("Himuro","But, don't suddenly show your teeth and
attack. If you're going to show something
let it be your dorsal fin.");
        MsgDisp("主人公","...Am I a shark?");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,4);
        VoicePlay("B040603302_06_110");
        MsgDisp("Himuro","Being hated by you is scarier than being
attacked by a shark.");
        MsgDisp("主人公","(Hmm? Am I supposed to be happy with
that...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040603302_06_120");
    MsgDisp("Himuro","Right. You should never think that what
you see is everything.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
