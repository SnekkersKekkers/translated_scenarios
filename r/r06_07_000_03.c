switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,34,0,0,0,#1,#1,0,0);
    VoicePlay("R060700003_07_000");
    MsgDisp("Mikage","Oh, that present.
That's mine.");
    MsgDisp("主人公","Huh? Really! I didn't know you were
participating, ｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("R060700003_07_010");
    MsgDisp("Mikage","What, is that a bad thing?");
    MsgDisp("主人公","No. ...Ah, ｛御影＊＊｝, I brought you
the present you have right now∈");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("R060700003_07_020");
    MsgDisp("Mikage","Oh, a holy night surprise?
I see.");
    MsgClose();
    break ;
    case 3:
    ChOpen(7,34,0,0,0,#1,#1,0,0);
    VoicePlay("R060700003_07_030");
    MsgDisp("Mikage","Enjoying the gift exchange?");
    MsgDisp("主人公","Hehe, ｛御影＊＊｝, are you also
participating?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("R060700003_07_040");
    MsgDisp("Mikage","Yeah, we are having a mixed staff and
student gift exchange.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("R060700003_07_050");
    MsgDisp("Mikage","Woah. You got the present that I brought
in, huh.");
    MsgDisp("主人公","Really! ...Oh? You also got the gift that
I brought in, ｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("R060700003_07_060");
    MsgDisp("Mikage","What a Christmas surprise.
Nice, how interesting!");
    MsgDisp("主人公","Yeah, it surprised me too.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,34,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("R060700003_07_070");
    MsgDisp("Mikage","｛主人公｝, you got a present, right?");
    MsgDisp("主人公","Yeah.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("R060700003_07_080");
    MsgDisp("Mikage","You seem happy.
Did you get a good one?");
    ChEye(7,5);
    ChMouth(7,4);
    ChMotion(7,0);
    VoicePlay("R060700003_07_090");
    MsgDisp("Mikage","...Hm?
That's my present you got!");
    MsgDisp("主人公","Huh∋ ｛御影＊＊｝, you also got my
present!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("R060700003_07_100");
    MsgDisp("Mikage","What a coincidence, huh.");
    MsgDisp("主人公","Hehe, so you're also participating, huh,
｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("R060700003_07_110");
    MsgDisp("Mikage","Is that bad?
I thought we could mix it up a bit, yeah?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("R060700003_07_120");
    MsgDisp("Mikage","Thanks to that, a
cool surprise happened.");
    MsgDisp("主人公","Yeah, I guess so!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
