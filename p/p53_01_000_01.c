BGMStop();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Wow...There are a lot of customers
this year. It seems like there are more
than last year. Ah, I'm nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("P530100001_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Did you come to support us?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("P530100001_01_010");
    MsgDisp("Kazama","Wow, this is a huge success.
Surely, there's no way we can make a
mistake here right?");
    MsgDisp("主人公","Ah, no...");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("P530100001_01_020");
    MsgDisp("Kazama","Oh, hey.
I was just kidding.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100001_01_030");
    MsgDisp("Kazama","The people in the venue, they are all
complete amateurs. So, they won't notice
if you make a small mistake.");
    MsgDisp("主人公","That's not true...");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("P530100001_01_040");
    MsgDisp("Kazama","Uhm.
Hey.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100001_01_050");
    MsgDisp("Kazama","Everyone, just think of these as
vegetables grown by Mikage-sensei, okay?");
    MsgDisp("主人公","Huh?
Hehe, then ｛風真＊＊｝ too?");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("P530100001_01_060");
    MsgDisp("Kazama","What?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100001_01_070");
    MsgDisp("Kazama","Think everyone else as vegetables, and go
harvest them okay?");
    MsgDisp("主人公","Hehe, yeah!");
    MsgDisp("主人公","(Alright, ｛風真＊＊｝ thanks
to that, I think I was able to relax a
bit? I'll do my bestー!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Wow...There are alot of customers this
year. It seems like there are more than
last year. Ah, I'm nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,4,2,#1,#1,0,0);
    VoicePlay("P530100001_01_080");
    MsgDisp("Kazama","As expected.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
What did you expect?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("P530100001_01_090");
    MsgDisp("Kazama","This isn't your solo concert, right?");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("P530100001_01_100");
    MsgDisp("Kazama","Don't act like it's all on your shoulders.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100001_01_110");
    MsgDisp("Kazama","A strong sense of responsibility is one of
your great points.
Everyone has been practicing, aren't they?");
    MsgDisp("主人公","I see, that's right.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100001_01_120");
    MsgDisp("Kazama","So, just try to relax, okay?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("P530100001_01_130");
    MsgDisp("Kazama","Well, I guess I'd prefer your solo concert
though.");
    MsgDisp("主人公","Hehe, thank you, ｛風真＊＊｝.
Thanks to you, I think I will be able to
play well!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100001_01_140");
    MsgDisp("Kazama","I will be right here with you, watching.
Go on.");
    MsgDisp("主人公","I'm going!");
    MsgDisp("主人公","(Okay.
Let's try our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
