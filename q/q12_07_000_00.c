BGOpen("sc810",0);
MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("Q120700000_07_000");
    MsgDisp("Mikage","Good work.
I'm sorry I dragged you around.
Do your legs hurt?");
    MsgDisp("主人公","I'm totally fine.
I really enjoyed the Nagasaki
extracurricular lesson.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("Q120700000_07_010");
    MsgDisp("Mikage","That's great.
Well, I'll spare you that smile.
No reports due today.");
    MsgDisp("主人公","Hehe, ok!
Thank you so much, ｛御影＊＊｝.");
    break ;
    case 3:
    VoicePlay("Q120700000_07_020");
    MsgDisp("Mikage","Aren't you tired?
My legs are done for.");
    MsgDisp("主人公","Are they?
I am fine.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("Q120700000_07_030");
    MsgDisp("Mikage","Well, I'm what you call comfortably tired.
Thanks.");
    MsgDisp("主人公","My pleasure, I enjoyed the Nagasaki
extracurricular lesson.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("Q120700000_07_040");
    MsgDisp("Mikage","Alright, there's no bell ringing but this
is still the end.");
    MsgDisp("主人公","Ok!
Thank you very much for today!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("Q120700000_07_050");
    MsgDisp("Mikage","It's my pleasure.
Oh, I'll spare you from submitting the
report.");
    ChClose(7);
    MsgDisp("主人公","(Hehe! That was so much fun. I want to
write about it. Thank you,
｛御影＊＊｝. )");
    break ;
    case 4:
    case 5:
    VoicePlay("Q120700000_07_060");
    MsgDisp("Mikage","Alright then, here is Extracurricular
class Nagasaki version over.");
    MsgDisp("主人公","Sigh, is it the end......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("Q120700000_07_070");
    MsgDisp("Mikage","Don't look so recognizablely sad.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q120700000_07_080");
    MsgDisp("Mikage","Thanks for hanging out with me for two
days.");
    MsgDisp("主人公","Me too, thank you even for the MVP
award......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q120700000_07_090");
    MsgDisp("Mikage","Hey, the school trip is not over yet.
Don't get soggy.");
    MsgDisp("主人公","Yes......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("Q120700000_07_100");
    MsgDisp("Mikage","Ah yes, the MVP award.
If you see the tulips every year, you get
reminded of this school trip.");
    MsgDisp("主人公","Yes. Will you also remember,
｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    ChEyeOpenLevel(7,8);
    VoicePlay("Q120700000_07_110");
    MsgDisp("Mikage","Of course.
Good memories last forever.
So, enjoy your school trip to the end!");
    ChClose(7);
    MsgDisp("主人公","(Good memories last forever...... I hope
the school trip with ｛御影＊＊｝ will
be a memory of a lifetime.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
