BGMStop();
BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("Q080300000_03_000");
    MsgDisp("Honda","Today was a full day.");
    MsgDisp("主人公","Yeah, it's because of you, ｛本多＊＊｝,
thanks for asking me!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("Q080300000_03_010");
    MsgDisp("Honda","Really∋
I had a lot of fun too.
Wanna hang out the next free period too?");
    MsgDisp("主人公","Hehe, sure.
Of course.");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("Q080300000_03_020");
    MsgDisp("Honda","I'm glad I invited you in the end.
I felt like I gained a lot more from going
with you than I would have alone.");
    MsgDisp("主人公","That's my line.
｛本多＊＊｝'s commentary felt very
luxurious.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("Q080300000_03_030");
    MsgDisp("Honda","Yay!
How about we spend tomorrow together too,
then?");
    MsgDisp("主人公","Yeah, of course!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
