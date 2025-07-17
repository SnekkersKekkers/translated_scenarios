switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600004_06_000");
    MsgDisp("Himuro","Thanks for going through that trouble.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600004_06_010");
    MsgDisp("Himuro","This is handmade, right? And pretty
elaborate. I can't believe you're just
giving these away... huh.");
    MsgDisp("主人公","I'm not just giving them out.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5);
    VoicePlay("L040600004_06_020");
    MsgDisp("Himuro","...It's only for me?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("L040600004_06_030");
    MsgDisp("Himuro","Ah, is that so.
Then I'll savor it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Thank goodness!
He seemed happy!)");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0,1);
    VoicePlay("L040600004_06_040");
    MsgDisp("Himuro","You're diligent, huh.
Actually making these by hand.");
    MsgDisp("主人公","I put my heart into them.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("L040600004_06_050");
    MsgDisp("Himuro","... Ah, is that so.
Well, the return gift has to be just as
good, I guess.");
    MsgDisp("主人公","It wasn't just for a good return, though.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("L040600004_06_060");
    MsgDisp("Himuro","I know.
I'm just saying I want to give you one.
... Anyways, thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Thank goodness!
He seemed happy!)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("L040600004_06_070");
    MsgDisp("Himuro","Looks good...");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("L040600004_06_080");
    MsgDisp("Himuro","You did your best for these, huh?");
    MsgDisp("主人公","Hehe, I guess so!");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("L040600004_06_090");
    MsgDisp("Himuro","This time, I have to admit you have a
reason to be proud.");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600004_06_100");
    MsgDisp("Himuro","I see you put your feelings in these, too.
Thanks, for the snack.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Thank goodness!
He seemed happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
