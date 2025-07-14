BGOpen("sc810",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    VoicePlay("Q020700000_42_000");
    MsgDisp("Male Student","Sorry, Mr. Mikage.
We have other plans...");
    VoicePlay("Q020700000_44_000");
    MsgDisp("School Girl","Us too, we're really sorry......");
    VoicePlay("Q020700000_07_000");
    MsgDisp("Mikage","Don't think too much about it, just spend
your free period freely.");
    VoicePlay("Q020700000_38_000");
    MsgDisp("Students","Okay!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoiceEVSPlay(7);
    VoicePlay("Q020700000_07_010");
    MsgDisp("Mikage","｛主人公｝, good morning.");
    MsgDisp("主人公","Good morning, ｛御影＊＊｝.
Did something happen?");
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("Q020700000_07_020");
    MsgDisp("Mikage","Yeah. I was thinking of doing an
\"Extracurricular Lesson: Nagasaki
Chapter!\", but I guess nobody's up for it.");
    MsgDisp("主人公","Extracurricular Lesson: Nagasaki Chapter?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("Q020700000_07_030");
    MsgDisp("Mikage","Oh, are you interested?");
    MsgSel("Yes, I would love to come!","Um, I'll pass.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("Q020700000_07_040");
        MsgDisp("Mikage","Well, that's settled. I'm still
recruiting, but at this rate ...there
won't be any others. Are you sure?");
        MsgDisp("主人公","Yes, I don't mind.");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,1);
        VoicePlay("Q020700000_07_050");
        MsgDisp("Mikage","Well, let's enjoy.");
        MsgDisp("主人公","(Extracurricular Lesson: Nagasaki
Chapter......
Hehe, I'm excited!)");
        break ;
        case 1:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("Q020700000_07_060");
        MsgDisp("Mikage","Welp, I knew it.
You made the correct choice.");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,0);
        VoicePlay("Q020700000_07_070");
        MsgDisp("Mikage","School Trips are a once in a lifetime
opportunity. Make sure to enjoy it to the
fullest so you won't regret it in the end.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(7);
        MsgDisp("主人公","(Hmmm...... ｛御影＊＊｝ looks
lonely...... I feel a bit bad.)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("Q020700000_07_080");
    MsgDisp("Mikage","Oh, you seem energetic today. ");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. good morning!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q020700000_07_090");
    MsgDisp("Mikage","Good morning!
Do you already have plans for the free
period?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("Q020700000_07_100");
    MsgDisp("Mikage","How does 'Extracurricular Lesson: Nagasaki
Chapter' sound to you?");
    MsgDisp("主人公","Eh, 
extracurricular lesson?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("Q020700000_07_110");
    MsgDisp("Mikage","At this moment, there are no participants.");
    MsgSel("Yes, please！","Um, I'll pass.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("Q020700000_07_120");
        MsgDisp("Mikage","Well, even if there is only one
participant, the event will go ahead.");
        MsgDisp("主人公","Hehe, I'm looking forward to it.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("Q020700000_07_130");
        VoiceEVSPlay(7);
        MsgDisp("Mikage","Okay, roll call! ｛主人公｝.");
        MsgDisp("主人公","Um... present?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,0);
        VoicePlay("Q020700000_07_140");
        MsgDisp("Mikage","All right, we're off!");
        MsgDisp("主人公","(Hehe, ｛御影＊＊｝ seems really
excited. I'm really excited to spend this
free period together with him!)");
        break ;
        case 1:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("Q020700000_07_150");
        MsgDisp("Mikage","I knew it......
You've come this far, and if I were you,
I'd also say no to a lesson for sure......");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(7);
        MsgDisp("主人公","(Hmmm......
Maybe I should've gone?)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
