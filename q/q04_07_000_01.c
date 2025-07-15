switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q040700001_07_000");
    MsgDisp("Mikage","So you're inviting me.
Of course, I'm coming.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    ChEyeOpenLevel(7,8);
    VoicePlay("Q040700001_07_010");
    MsgDisp("Mikage","Haha, extracurricular lesson Nagasaki
edition, let's go!");
    MsgDisp("主人公","Yes, let's go!");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("Q040700001_07_020");
    MsgDisp("Mikage","It's fine of course.
I was also thinking of a extracurricular
lesson Nagasaki edition.");
    MsgDisp("主人公","Yay! I'm looking forward to the
extracurricular lesson Nagasaki edition.");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("Q040700001_07_030");
    MsgDisp("Mikage","Whoa, you're in the right place!
I was also searching for participants of
extracurricular lesson Nagasaki edition.");
    MsgDisp("主人公","Ehm...... I was actually hoping to look
around with ｛御影＊＊｝......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("Q040700001_07_040");
    MsgDisp("Mikage","Is that so, I'm glad.");
    MsgDisp("主人公","Eh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("Q040700001_07_050");
    MsgDisp("Mikage","It isn't really popular, so you're the
only participant.");
    MsgDisp("主人公","Yay!
Well then, let's go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
