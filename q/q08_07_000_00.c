BGMStop();
BGOpen("sc810",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q080700000_07_000");
    MsgDisp("Mikage","Good work.
Take a good rest.");
    MsgDisp("主人公","Yes.
I'm happy I could look around with 
｛御影＊＊｝ .");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("Q080700000_07_010");
    MsgDisp("Mikage","That's great to hear.
Shall we do another extracurricular 
lesson-Nagasaki version, the next time?");
    MsgDisp("主人公","Yes, by all means!");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q080700000_07_020");
    MsgDisp("Mikage","Thanks for today.
You're exempt from submitting a special 
report.");
    MsgDisp("主人公","Hehe, yay!
Extracurricular class, Nagasaki edition
was so much fun!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("Q080700000_07_030");
    MsgDisp("Mikage","That's great.
So, shall we do it again the day after 
tomorrow?");
    MsgDisp("主人公","Yes, of course!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
