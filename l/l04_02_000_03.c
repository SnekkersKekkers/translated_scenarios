switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("L040200003_02_000");
    MsgDisp("Sassa","Oh.");
    MsgDisp("主人公","...How is it?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("L040200003_02_010");
    MsgDisp("Sassa","This is handmade, right?");
    MsgDisp("主人公","Yeah.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200003_02_020");
    MsgDisp("Sassa","And it looks just like something I'd like.
Thank you.
I'll eat it carefully.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(He seemed really happy!
Thank goodness.)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("L040200003_02_030");
    MsgDisp("Sassa","Uwah...this is handmade, right?");
    MsgDisp("主人公","Yeah, I put some effort in.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200003_02_040");
    MsgDisp("Sassa","You made it pretty well.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("L040200003_02_050");
    MsgDisp("Sassa","Oh, you thought about my preferences, too.");
    MsgDisp("主人公","Yeah, you realized?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200003_02_060");
    MsgDisp("Sassa","It's almost a waste to eat it, but I want
to eat it right now.
Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(He seemed really happy!
Thank goodness.)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200003_02_070");
    MsgDisp("Sassa","This handmade, right...?
You put some effort in.");
    MsgDisp("主人公","Yeah, I did my best.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("L040200003_02_080");
    MsgDisp("Sassa","It's more than that.
It looks good enough to sell.");
    MsgDisp("主人公","｛颯砂＊＊｝, you're praising me
too much.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("L040200003_02_090");
    MsgDisp("Sassa","That's not true.
I'm really happy you thought about my
tastes, too.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200003_02_100");
    MsgDisp("Sassa","But if it's this perfect, I don't want to
bite it or crack it...
What should I do?");
    MsgDisp("主人公","What?
What should you do...just eat it?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200003_02_110");
    MsgDisp("Sassa","I can't.
That's it, let's eat this together.
Okay?");
    MsgDisp("主人公","No, eat it slowly at home.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200003_02_120");
    MsgDisp("Sassa","Got it. I'll stare at it until I get
tired, then eat it. That's fine, right?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(｛颯砂＊＊｝ exaggerated a bit...
But he seemed really happy!
Thank goodness.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
