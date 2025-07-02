ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,254,4,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200003_02_000");
    MsgDisp("Sassa","｛主人公｝, isn't this kind of bad?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
You mean my results, right...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("N020200003_02_010");
    MsgDisp("Sassa","Yeah, but there's no use dwelling on it,
let's just do our best next time.");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(Oof, I've got to study harder...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200003_02_020");
    MsgDisp("Sassa","｛主人公｝, are you okay?");
    MsgDisp("主人公","Huh?
｛颯砂＊＊｝, what do you mean?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("N020200003_02_030");
    MsgDisp("Sassa","I'm talking about your test results.
I hope you don't mind.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("N020200003_02_040");
    MsgDisp("Sassa","No, you should mind.
You should be a little concerned.");
    MsgDisp("主人公","Umm...
Yeah, I guess you're right.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("N020200003_02_050");
    MsgDisp("Sassa","Yeah, I'm serious.
I don't want to worry about you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(Oof, I really need to study harder...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,4,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200003_02_060");
    MsgDisp("Sassa","｛主人公｝, this is really weird coming
from you.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
What's wrong?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("N020200003_02_070");
    MsgDisp("Sassa","Is your name not on the list? 
This must be a mistake. Should I tell
the teachers?");
    MsgDisp("主人公","Huh∋
You don't have to tell them.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("N020200003_02_080");
    MsgDisp("Sassa","What?");
    MsgDisp("主人公","Well...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200003_02_090");
    MsgDisp("Sassa","I see, you're very sweet.
Teachers can make mistakes too.");
    MsgDisp("主人公","Ah, but it's not a mistake...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200003_02_100");
    MsgDisp("Sassa","Okay, I got it. See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝, I'm so low on the list he
didn't see it... Oof... I have to study
harder next time...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2);
