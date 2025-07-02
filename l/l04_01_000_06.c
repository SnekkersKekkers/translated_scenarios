switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("L040100006_01_000");
    MsgDisp("Kazama","You know, this......");
    MsgDisp("主人公","It's handmade, if you're
wondering.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,9);
    VoicePlay("L040100006_01_010");
    MsgDisp("Kazama","Ah, I know that.
They wouldn't sell something like this.");
    MsgDisp("主人公","Um......");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,0);
    VoicePlay("L040100006_01_020");
    MsgDisp("Kazama","Let me say my thanks.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100006_01_030");
    MsgDisp("Kazama","But, just between me and you,
it's not good to play with food.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Ugh......
I should've tried harder......)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100006_01_040");
    MsgDisp("Kazama","You can really tell it's
handmade.");
    MsgDisp("主人公","I put some effort in.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100006_01_050");
    MsgDisp("Kazama","You did take this seriously, right?");
    MsgDisp("主人公","Um, yeah.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100006_01_060");
    MsgDisp("Kazama","I see, then it's fine.
Thanks.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("L040100006_01_070");
    MsgDisp("Kazama","Well, it's fine.
It's just barely on the side of
unique and edible.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Ugh......
I should've tried harder......)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100006_01_080");
    MsgDisp("Kazama","This...... is chocolate, right?");
    MsgDisp("主人公","Yeah......
It's homemade chocolate.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100006_01_090");
    MsgDisp("Kazama","It's a chocolate that I can tell
you put a lot of effort into.
But well, the result is kind of......");
    MsgDisp("主人公","I did do my best, sorry.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("L040100006_01_100");
    MsgDisp("Kazama","It's kind of like your alter ego.
I like it.");
    MsgDisp("主人公","｛風真＊＊｝...... thank you.
But, calling me and the chocolate alike
is a little......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100006_01_110");
    MsgDisp("Kazama","Come on, the creator shouldn't
be saying stuff like that.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100006_01_120");
    MsgDisp("Kazama","Just leave this guy to me.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Ha......
I wish I gave him a
better chocolate......)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
