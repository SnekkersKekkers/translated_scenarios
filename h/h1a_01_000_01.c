BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0100001_01_000");
    MsgDisp("Kazama","Yo.");
    MsgDisp("主人公","｛風真＊＊｝......
We lost......");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H1A0100001_01_010");
    MsgDisp("Kazama","Yeah, but you got a lot more
applause compared to the other team
you know?");
    MsgDisp("主人公","Really......?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100001_01_020");
    MsgDisp("Kazama","Yeah, I was impressed too.
Thanks.");
    MsgDisp("主人公","｛風真＊＊｝……");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100001_01_030");
    MsgDisp("Kazama","Come on, keep your head up, and
get back to being yourself.
Everyone's waiting for you.");
    MsgDisp("主人公","......Yeah.
Thanks, ｛風真＊＊｝.");
    MsgDisp("主人公","(We lost, but I'm glad
I did my best.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0100001_01_040");
    MsgDisp("Kazama","That was a good match, wasn't it?");
    MsgDisp("主人公","Ugh, ｛風真＊＊｝......
We lost......");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("H1A0100001_01_050");
    MsgDisp("Kazama","It's fine if you want to cry,
just for today.");
    MsgDisp("主人公","Yeah......");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    VoicePlay("H1A0100001_01_060");
    MsgDisp("Kazama","I'm a little jealous.");
    ChMotion(1,0);
    MsgDisp("主人公","Hm?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100001_01_070");
    MsgDisp("Kazama","It shows how much effort you
put into this.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H1A0100001_01_080");
    MsgDisp("Kazama","I'm jealous of the guys
in the baseball club.");
    MsgDisp("主人公","Yeah......");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100001_01_090");
    MsgDisp("Kazama","I'm sure everyone's thankful to you.");
    MsgDisp("主人公","Thanks, ｛風真＊＊｝.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H1A0100001_01_100");
    MsgDisp("Kazama","It's your last duty.
Go ahead and cheer everyone up.
With that smile of yours.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100001_01_110");
    MsgDisp("Kazama","Starting tomorrow, that treatment
will be just for me.");
    MsgDisp("主人公","(Thank you, ｛風真＊＊｝. We might have
lost, but I'll cherish this memory
forever......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
