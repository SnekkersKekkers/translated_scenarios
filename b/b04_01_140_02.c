BGOpen("ne210",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
VoicePlay("B040114002_01_000");
MsgDisp("Kazama","There are lots of people here, 
but strangely, I don't mind it.");
MsgSel("It is darkest under the lamp post","No matter what you do, no one will notice, huh?","Yeah, everyone looks like they're dreaming");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040114002_01_010");
    MsgDisp("Kazama","Oi, doesn't that have a completely
different meaning?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        ChCheek(1,7);
        VoicePlay("B040114002_01_020");
        MsgDisp("Kazama","What are you saying?
I-I'm not doing anything.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040114002_01_030");
        MsgDisp("Kazama","What you even plan to sneakily 
do in a place like this?");
        MsgDisp("主人公","I see, the only thing you could
do is listen to the music here.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040114002_01_040");
        MsgDisp("Kazama","That's right.
Well, let's proudly hold hands
and enjoy it, shall we?");
        MsgDisp("主人公","Hehe, yeah.");
        MsgClose();
        ScrFadeOut(0,0);
        ChClose(1,0,0);
        BGMPlay("BGM_EVENT_ROCKFES",0.01);
        BGOpen("ne220",0);
        SEPlay("EV_SE_GAYA_003",0,0.5);
        ScrFadeIn(0);
        Wait(150,1);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        BGMStop();
        SEStop("EV_SE_GAYA_003",1);
        ScrFadeOut(0,0);
        ChOpen(1,255,0,0,3,#1,#1,0,0);
        BGOpen("ne210",0);
        ScrFadeIn(0);
        MsgDisp("主人公","Phew, that was fun, wasn't it!");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040114002_01_050");
        MsgDisp("Kazama","That's right.
I wasn't a fan of that band, but
I still kinda liked the song.");
        MsgDisp("主人公","Heeh, that's surprising.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,4);
        ChCheek(1,7);
        VoicePlay("B040114002_01_060");
        MsgDisp("Kazama","Well, your side profile and this song
is imprinted on me as a set. This
feels like the background music 
to your merry self.");
        MsgDisp("主人公","(｛風真＊＊｝, did you not 
look at the stage...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040114002_01_070");
    MsgDisp("Kazama","Maybe.
But, you shouldn't space out.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
