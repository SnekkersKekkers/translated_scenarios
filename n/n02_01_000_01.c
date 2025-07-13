ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020100001_01_000");
    MsgDisp("Kazama","Hmm, I think I ranked quite high.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, how was it?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100001_01_010");
    MsgDisp("Kazama","Same as usual.
I'll have you know I was quite motivated.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100001_01_020");
    MsgDisp("Kazama","Guess I'll just keep on working hard then.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Well, I'll have to work hard too!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020100001_01_030");
    MsgDisp("Kazama","Did you make it?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("N020100001_01_040");
    MsgDisp("Kazama","I'm feeling nervous too.");
    MsgDisp("主人公","Haha, there's no way I can compete with
you, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100001_01_050");
    MsgDisp("Kazama","Geez. Is this a new strategy where you
intentionally lag behind so that you can
suddenly jump into first place?");
    MsgDisp("主人公","Eh...?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100001_01_060");
    MsgDisp("Kazama","I'm just joking. That being said, with you
at this level, beating you is too easy.");
    MsgDisp("主人公","(That's right...
I'll really have to do better than this.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,1,0,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020100001_01_070");
    MsgDisp("Kazama","Hmm, this is bad.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Have you seen the results?");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100001_01_080");
    MsgDisp("Kazama","You really have to aim much higher than
this.");
    MsgDisp("主人公","You think so?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100001_01_090");
    MsgDisp("Kazama","Trust me on this.
There's no mistaking it at this point.");
    MsgDisp("主人公","Yeah... You're right!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("N020100001_01_100");
    MsgDisp("Kazama","That's the spirit! The two of us, let's
grab the top spot from those guys there.");
    MsgDisp("主人公","(Yes, I'll have to make my way through
the top!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1);
