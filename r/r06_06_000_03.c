switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,34,0,0,0,#1,#1,0,0);
    VoicePlay("R060600003_06_000");
    MsgDisp("Himuro","Ah...you're the one who got it?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R060600003_06_010");
    MsgDisp("Himuro","That's the present I brought.");
    MsgDisp("主人公","That's right!
...Uh, ｛氷室＊＊｝, did you know you also
got my present I brought?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R060600003_06_020");
    MsgDisp("Himuro","Woah...
I didn't think that would even be
possible.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,34,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("R060600003_06_030");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
What did you get?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R060600003_06_040");
    MsgDisp("Himuro","This.");
    MsgDisp("主人公","That's the present I brought!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R060600003_06_050");
    MsgDisp("Himuro","Woah, that's incredible.");
    MsgDisp("主人公","I hope you enjoy it.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("R060600003_06_060");
    MsgDisp("Himuro","I hope so too.
You also got the present that I brought.");
    MsgDisp("主人公","Huh, really∋
What a coincidence.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("R060600003_06_070");
    MsgDisp("Himuro","That really surprised me.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,34,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("R060600003_06_080");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R060600003_06_090");
    MsgDisp("Himuro","That present...");
    MsgDisp("主人公","What about it?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("R060600003_06_100");
    MsgDisp("Himuro","That's the one I brought.
I'm glad that you got it.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝, it seems you also got
mine...");
    ChEye(6,4);
    ChMouth(6,0);
    ChMotion(6,5);
    VoicePlay("R060600003_06_110");
    MsgDisp("Himuro","Really?
...Amazing.");
    MsgDisp("主人公","A Christmas miracle?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("R060600003_06_120");
    MsgDisp("Himuro","Yes, a miracle indeed.
I'm already happy with this miracle.");
    MsgDisp("主人公","Hehe.
How about you don't say that and open it?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
