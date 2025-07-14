BGMStop();
BGOpen("sc810",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q080700001_07_000");
    MsgDisp("Mikage","This is the end of today's lessons.
Did you enjoy it?");
    MsgDisp("主人公","Yes, thank you very much.
May I come next time too?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q080700001_07_010");
    MsgDisp("Mikage","Oh, sure.
Happy to hear you like the Extracurricular
lessons, Nagasaki edition.");
    MsgDisp("主人公","Hehe, of course!");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q080700001_07_020");
    MsgDisp("Mikage","Good work.
Thanks to you I was kept me entertained.");
    MsgDisp("主人公","That is my line.
Thank you for the lessons!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q080700001_07_030");
    MsgDisp("Mikage","Oh, if you liked it, so much Maybe we
should hold it again the day after
tomorrow?");
    MsgDisp("主人公","Yay!　If possible!");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q080700001_07_040");
    MsgDisp("Mikage","Extracurricular lesson, Nagasaki ver, This
is the end of the first part.
Thank you for listening.");
    MsgDisp("主人公","Eh, first part?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("Q080700001_07_050");
    MsgDisp("Mikage","What, are you filled already?
Tommorow it's also being held.");
    MsgDisp("主人公","Really!　I would love to
come along.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("Q080700001_07_060");
    MsgDisp("Mikage","Alright, it has been decided with at least
one participant.
See you here the day after tomorrow.");
    MsgDisp("主人公","Yes,
Thank you very much!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
