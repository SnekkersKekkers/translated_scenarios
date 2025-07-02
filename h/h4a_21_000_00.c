switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc624",0);
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,7,0,0,-1,-1,0,0);
    ChLayout(1);
    Wait(15,0);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H4A2100000_21_000");
    MsgDisp("Michiru","Mari, congrats on winning!");
    MsgDisp("主人公","Thank you!");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H4A2100000_21_010");
    MsgDisp("Michiru","I can't believe you even beat
Hikaru. Hehe, today's victory party
is going to be complicated.");
    MsgDisp("主人公","(Ah...... I see.
But I'm glad I worked so hard at the
rhythmic gymnastics club......!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc624",0);
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,7,0,0,-1,-1,0,0);
    ChLayout(1);
    Wait(15,0);
    ScrFadeIn(0);
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H4A2100000_21_020");
    MsgDisp("Michiru","Congratulations on winning, Mari!");
    MsgDisp("主人公","Thank you!");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("H4A2100000_21_030");
    MsgDisp("Michiru","It was like watching the dance
of a goddess.
It was truly beautiful.");
    MsgDisp("主人公","Hehe, you're making me shy.");
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,3);
    ChEyeOpenLevel(21,0);
    VoicePlay("H4A2100000_21_040");
    MsgDisp("Michiru","Bonus points for that smile.
No one can beat you now. Hehe!");
    MsgDisp("主人公","(Hehe!
I'm glad I stayed in the
rhythmic gymnastics club!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
