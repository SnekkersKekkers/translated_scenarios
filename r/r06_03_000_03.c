ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,34,3,3,3,#1,#1,0,0);
    VoicePlay("R060300003_03_000");
    MsgDisp("Honda","Hey hey.
You're holding my gift!");
    MsgDisp("主人公","This is your gift, ｛本多＊＊｝?
Ah, ｛本多＊＊｝, you also got the
present I brought.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R060300003_03_010");
    MsgDisp("Honda","Really?
Then I'm gonna open it right now.");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,34,3,3,3,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("R060300003_03_020");
    MsgDisp("Honda","｛主人公｝,
You got the jackpot!");
    MsgDisp("主人公","｛本多＊＊｝.
what's the jackpot?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R060300003_03_030");
    MsgDisp("Honda","Your present,
cause that's the one I picked.");
    MsgDisp("主人公","Huuh, really?
Hey, ｛本多＊＊｝, did you know you got
the present I brought in?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("R060300003_03_040");
    MsgDisp("Honda","That's an insane coincidence∈
Hey, is it okay if I open this?");
    MsgDisp("主人公","Of course!");
    break ;
    case 4:
    case 5:
    VoicePlay("R060300003_03_050");
    MsgDisp("Honda?","Huh∋　Seriously∋");
    MsgClose();
    ChOpen(3,34,1,4,0,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
What's wrong?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("R060300003_03_060");
    MsgDisp("Honda","I thought about every possible
way it could go to you,
so this is a miracle.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("R060300003_03_070");
    MsgDisp("Honda","But I didn't think it
would become a reality.");
    MsgDisp("主人公","Oh, then this is
your present, ｛本多＊＊｝?");
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("R060300003_03_080");
    MsgDisp("Honda","Ding Ding Ding!
Right on the money!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝, did you know 
that you also got the present I brought?");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("R060300003_03_090");
    MsgDisp("Honda","Huh, really∋
I didn't expect this.");
    MsgDisp("主人公","Hehe.
You can open it if you want, okay?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
