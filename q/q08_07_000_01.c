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
May I join younext time too?");
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
Thanks to you I was kept well entertained.");
    MsgDisp("主人公","That's my line.
Thank you for the lessons!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q080700001_07_030");
    MsgDisp("Mikage","Oh, if you liked it that much maybe we
should hold it again tomorrow?");
    MsgDisp("主人公","Yay!
If possible!");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q080700001_07_040");
    MsgDisp("Mikage","Extracurricular lesson, Nagasaki version.
This is the end of the first episode.
Thank you for listening.");
    MsgDisp("主人公","Eh, first episode?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("Q080700001_07_050");
    MsgDisp("Mikage","What, are you tired already?
It's also happening tomorrow.");
    MsgDisp("主人公","Really!
I would love to come along.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("Q080700001_07_060");
    MsgDisp("Mikage","Alright, it has been decided with at least
one participant.
See you here tomorrow.");
    MsgDisp("主人公","Yes, thank you very much!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
