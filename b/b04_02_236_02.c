MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040223602_02_000");
MsgDisp("Sassa","Apparently the parade is going to finish
late...");
MsgSel("At this rate we'll have to pull an all nighter?","If we run home we'll be alright!","I want to watch until the end");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040223602_02_010");
        MsgDisp("Sassa","Haa...
Don't say that, even as a joke.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040223602_02_020");
        MsgDisp("Sassa","You're trying to mess
with me aren't you?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040223602_02_030");
        MsgDisp("Sassa","Too bad.
I'm surprising good at 
that sort of thing.");
        MsgDisp("主人公","Eh...?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040223602_02_040");
        MsgDisp("Sassa","I'm the kind who goes camping overnight at
the mountains and sea with my family.");
        MsgDisp("主人公","Is that so?
Seems fun!");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040223602_02_050");
        MsgDisp("Sassa","Yeah it was fun.
But if it was with you, 
it'd be even more fun...");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,5);
        ChCheek(2,10);
        VoicePlay("B040223602_02_060");
        MsgDisp("Sassa","Ah, no, I meant camping. Not the
all-nighter you were talking about.");
        MsgDisp("主人公","Hehe, yeah!
I want to go someday.");
        MsgDisp("主人公","(If it's with ｛颯砂＊＊｝,
anywhere would be fun?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040223602_02_070");
    MsgDisp("Sassa","With that setup, we might
have to run after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040223602_02_080");
    MsgDisp("Sassa","I understand you want to watch,
but it depends on the time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
