ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020700002_07_000");
    MsgDisp("Mikage","Oh, isn't that a passing score?
I think it is.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("N020700002_07_010");
    MsgDisp("Mikage","Whether you push a little harder or not,
it's okay.");
    MsgDisp("主人公","(Hmm...
Maybe I should study a little bit harder?)");
    break ;
    case 3:
    MsgClose();
    ChOpen(7,254,1,0,0,#1,#1,0,0);
    VoicePlay("N020700002_07_020");
    MsgDisp("Mikage","Well, it's an okay score, right?
Not good but not bad either.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("N020700002_07_030");
    MsgDisp("Mikage","High school life only happens once.
Find something meaningful, even if it's
not just about studying.");
    MsgDisp("主人公","Umm, okay...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("N020700002_07_040");
    MsgDisp("Mikage","Good luck, serious girl.");
    MsgDisp("主人公","(Hmm...
Maybe I should study a little bit harder?)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020700002_07_050");
    MsgDisp("Mikage","Haha, right in the dead center.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("N020700002_07_060");
    MsgDisp("Mikage","An average among averages?
You should put yourself in a position
where it's easier to make a comment.");
    MsgDisp("主人公","Umm...?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("N020700002_07_070");
    MsgDisp("Mikage","I'm kidding.
But still, this doesn't seem like you.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("N020700002_07_080");
    MsgDisp("Mikage","At least not a grade like this.
I'm counting on you, okay?");
    MsgDisp("主人公","(If he's counting on me then...
Yeah, I'm gonna study harder next time.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
