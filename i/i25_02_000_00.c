BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,4,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("I250200000_02_000");
    MsgDisp("Sassa","｛主人公｝,
good work.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Welcome.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I250200000_02_010");
    MsgDisp("Sassa","So you had work today.
Your apron's nice.");
    MsgDisp("主人公","Thanks.
Are you looking for something?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I250200000_02_020");
    MsgDisp("Sassa","Yeah, I came to buy this
comic that I like.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I250200000_02_030");
    MsgDisp("Sassa","A crazy manga where a dog is the
main character.
Do you know it?");
    MsgDisp("主人公","A dog is the main character?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I250200000_02_040");
    MsgDisp("Sassa","It's a little old, but a new
edition just came out.
If you want, you can borrow it from me.");
    MsgDisp("主人公","Hehe, okay.
Thanks.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    VoicePlay("I250200000_02_050");
    MsgDisp("Sassa","Ah, there it is.
It's that.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(Hehe, ｛颯砂＊＊｝
really likes dogs......)");
    break ;
    case 3:
    VoicePlay("I250200000_02_060");
    MsgDisp("Sassa?","Excuse me, miss.");
    MsgDisp("主人公","Ah, yes.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,3,3,3,0,-1,0,0);
    VoicePlay("I250200000_02_070");
    MsgDisp("Sassa","Haha, it's me.");
    MsgDisp("主人公","Ah, it was you, ｛颯砂＊＊｝?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I250200000_02_080");
    MsgDisp("Sassa","You know, talking to you like this
feels interesting compared to talking
at school or when we go out.");
    MsgDisp("主人公","Interesting?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I250200000_02_090");
    MsgDisp("Sassa","Yeah, it's new.
Ah, but not in a bad way.
This, please.");
    MsgDisp("主人公","Yes, thank you very much.
......\"Animal Nutrition\"?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I250200000_02_100");
    MsgDisp("Sassa","Yeah. We have one in the
school library, but I wanted to buy
the new edition that just came out.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I250200000_02_110");
    MsgDisp("Sassa","I'll have to review it as soon
as I get home.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝,
what are you studying?)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,4,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("I250200000_02_120");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah, welcome, ｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I250200000_02_130");
    MsgDisp("Sassa","I'm not here for anything today.
Just hanging out.");
    MsgDisp("主人公","Yeah, it's easy to wander into
a bookstore.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("I250200000_02_140");
    MsgDisp("Sassa","You're a good shopkeeper.
Just you being here makes the store
nicer.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,2);
    VoicePlay("I250200000_02_150");
    MsgDisp("Sassa","Haa...... I want to work
part-time here, too.");
    MsgDisp("主人公","Huh?
You, ｛颯砂＊＊｝, in a bookstore?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("I250200000_02_160");
    MsgDisp("Sassa","You don't need to be so surprised.");
    MsgDisp("主人公","Hehe, sorry.
But maybe I do want to see you
wearing this apron, ｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("I250200000_02_170");
    MsgDisp("Sassa","Matching aprons with you......
Nice, maybe I'll really get a part-time
job here.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,1);
    ChEyeOpenLevel(2,0);
    VoicePlay("I250200000_02_180");
    MsgDisp("Sassa","Let me know next time
you guys are hiring. I'm already trained
for heavy lifting, you know?");
    MsgDisp("主人公","Hehe, I'll let you know.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I250200000_02_190");
    MsgDisp("Sassa","Until then, I'll come to see
your apron──
I mean, the books, okay?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(Working with ｛颯砂＊＊｝
would make the store really lively!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
