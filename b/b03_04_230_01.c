BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B030423001_04_000");
MsgDisp("Nanatsumori","Alright.
So what's your choice?");
MsgSel("The Roller Coaster sounds fun!","Let's ride the ferris wheel.","I want to try bungee jumping!","I want to ride the tea cups.","Let's go to the haunted house");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B030423001_04_010");
    MsgDisp("Nanatsumori","Aah...
Alright.
Sure thing.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,0);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr420",0);
    ScrFadeIn(0);
    VoicePlay("B030423001_04_020");
    MsgDisp("Nanatsumori","Caring about my hair at an amusement park
is pretty girly...
Alright, I'm ready.");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("B030423001_04_030");
    MsgDisp("Nanatsumori","ＯＫ.
We can take it easy.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr430",0);
    ScrFadeIn(0);
    VoicePlay("B030423001_04_040");
    MsgDisp("Nanatsumori","Sit on the other side toward the left.
It's got an amazing view.");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(4,1);
    ChMouth(4,2);
    ChEyeOpenLevel(4,10);
    VoicePlay("B030423001_04_050");
    MsgDisp("Nanatsumori","That look in your eyes.
Are you serious right now?
I want to look away, but...");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr440",0);
    ScrFadeIn(0);
    VoicePlay("B030423001_04_060");
    MsgDisp("Nanatsumori","I'm turning on my serious switch too!
My messed up hair will be a testament to
my bravery......!");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B030423001_04_070");
    MsgDisp("Nanatsumori","You got it.
But it's absolutely against the rules to
turn the handle like you're a DJ.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr450",0);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("B030423001_04_080");
    MsgDisp("Nanatsumori","Let me tell you something.
What I said before, I wasn't joking, okay?");
    break ;
    case 4:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("B030423001_04_090");
    MsgDisp("Nanatsumori","Ohh, really now?
Well, let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    Wait(40,0);
    BGOpen("tr460",0);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("B030423001_04_100");
    MsgDisp("Nanatsumori","This was your decision, wasn't it?
If you start to whine about it later, I'm
going to laugh, you know?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
