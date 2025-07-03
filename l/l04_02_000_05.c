switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("L040200005_02_000");
    MsgDisp("Sassa","......Ah.");
    MsgDisp("主人公","What's wrong?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200005_02_010");
    MsgDisp("Sassa","Ah, nothing.
......This is handmade?");
    MsgDisp("主人公","Yeah.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200005_02_020");
    MsgDisp("Sassa","I see.
You can make sweets, too.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200005_02_030");
    MsgDisp("Sassa","You added a lot of good-looking
stuff. I'll eat it at home.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Did I add something that
he doesn't like......?
But, he seemed pleased enough.)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("L040200005_02_040");
    MsgDisp("Sassa","Oh, this is handmade.");
    MsgDisp("主人公","Yeah, I put some effort in.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,3);
    VoicePlay("L040200005_02_050");
    MsgDisp("Sassa","This is......
for me, right?");
    MsgDisp("主人公","That's right, is something wrong?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200005_02_060");
    MsgDisp("Sassa","No, just checking.
I'm glad you made it for me.
Thanks.");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("L040200005_02_070");
    MsgDisp("Sassa","I'll eat whatever I must.
Alright.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Did I add something that
he doesn't like......?
But, he seemed pleased enough.)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200005_02_080");
    MsgDisp("Sassa","Oh, it's handmade.
Nice.");
    MsgDisp("主人公","Yeah, how is it?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200005_02_090");
    MsgDisp("Sassa","It's really well made.
There's just something in it that I'm
not good with.");
    MsgDisp("主人公","Oh!　S-Sorry......");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("L040200005_02_100");
    MsgDisp("Sassa","Don't apologize.
I'm just happy that you thought to
make something for me.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("L040200005_02_110");
    MsgDisp("Sassa","I'll eat it all.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(I added something he
didn't like......
But, he seemed pleased enough.))");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
