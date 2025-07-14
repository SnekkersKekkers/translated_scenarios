BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("I660800007_39_000");
    MsgDisp("Male Customer","Thanks.
See you again ▼");
    SEPlay("EV_SE_589",1);
    Wait(90,0);
    MsgDisp("主人公","Thank you very much!
We look forward to your next visit!");
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,3,3,#1,#1,0,0);
    ChMotion(8,3,1);
    VoicePlay("I660800007_08_000");
    MsgDisp("Shirahane","That's our poster girl for ya.");
    MsgDisp("主人公","Ah, ｛大地＊＊｝.");
    VoicePlay("I660800007_08_010");
    MsgDisp("Shirahane","That regular only comes when you're on
shift, y'know?");
    MsgDisp("主人公","Really?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("I660800007_08_020");
    MsgDisp("Shirahane","Rumor has it that our stand has a cute
attendant. Th' increase in customers has
our manager happy, too.");
    MsgDisp("主人公","That's......");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("I660800007_08_030");
    MsgDisp("Shirahane","Haha!
Keep up the good work.");
    MsgDisp("主人公","(It's a little embarrassing, but I'm happy
to see that my hard work is being
recognized.)");
    break ;
    case 4:
    case 5:
    VoicePlay("I660800007_39_010");
    MsgDisp("Male Customer","See ya, thanks ▼");
    SEPlay("EV_SE_589");
    Wait(90,0);
    MsgDisp("主人公","Thank you very much!
We look forward to your next visit!");
    SEStop("EV_SE_589",1);
    MsgClose();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,3,4,10,#1,0,0);
    VoicePlay("I660800007_08_040");
    MsgDisp("Shirahane","So you've become our poster girl......");
    MsgDisp("主人公","Ah, ｛大地＊＊｝.");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    ChCheek(8,3);
    VoicePlay("I660800007_08_050");
    MsgDisp("Shirahane","That regular only comes on days you're
working.
What a perv.");
    MsgDisp("主人公","Huh∋");
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("I660800007_08_060");
    MsgDisp("Shirahane","The manager's happy that our customers and
sales are up 'cuz of you, but......");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("I660800007_08_070");
    MsgDisp("Shirahane","I'm feelin' a little complicated......");
    ChEye(8,1);
    ChMouth(8,1);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("I660800007_08_080");
    MsgDisp("Shirahane","......Wait, as if I got the time to be
gettin' jealous of the customers!
Get it together, me!");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("I660800007_08_090");
    MsgDisp("Shirahane","I'm startin' to really enjoy working
part-time here thanks t' ya.
I got it......");
    MsgDisp("主人公","(It's a little embarrassing, but I'm happy
to see that my hard work is being
recognized.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
