ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020700001_07_000");
    MsgDisp("Mikage","Yo.
You're working hard. these are great
results.");
    MsgDisp("主人公","Yes, I did do my best!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("N020700001_07_010");
    MsgDisp("Mikage","But there's still room for improvement.
Since it's you we are talking about,
shouldn't you aim for the first place?");
    MsgDisp("主人公","(Alright, then I'll aim even higher!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("N020700001_07_020");
    MsgDisp("Mikage","｛主人公｝, those are good results.");
    MsgDisp("主人公","Yes, thank you very much.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("N020700001_07_030");
    MsgDisp("Mikage","Keep this up along with your
extracurriculars.
Then you can accomplish anything.");
    MsgDisp("主人公","(Yeah, I will accomplish everything!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("N020700001_07_040");
    MsgDisp("Mikage","｛主人公｝, those are good results.");
    MsgDisp("主人公","｛御影＊＊｝, thank you very much.
But...I think I could have tried a little
harder.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("N020700001_07_050");
    MsgDisp("Mikage","Haha, I see.
If you think so, then I think you can aim
for even higher.");
    MsgDisp("主人公","Yes.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("N020700001_07_060");
    MsgDisp("Mikage","Whether it's studying or doing your
extracurriculars, if you are serious about
it, you can do anything.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("N020700001_07_070");
    MsgDisp("Mikage","Keep at it until you're satisfied!
Ah, and if you ever want to take a break,
I'll be here.");
    MsgDisp("主人公","Hehe, okay.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("N020700001_07_080");
    MsgDisp("Mikage","See ya.");
    MsgDisp("主人公","(When ｛御影＊＊｝ supports me, I feel
even more determined!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
