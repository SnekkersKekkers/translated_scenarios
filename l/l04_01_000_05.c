switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_000");
    MsgDisp("Kazama","Wow, this is handmade, right?");
    MsgDisp("主人公","Yeah. I did my best.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_010");
    MsgDisp("Kazama","I see......
Well, having a lot of different things
is good too, right?");
    MsgDisp("主人公","Yeah.
I hope it suits your taste.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_020");
    MsgDisp("Kazama","Thanks.
I'll eat it later.");
    MsgDisp("主人公","(Did I add too much on it?
Ah...... maybe, did I add something he
doesn't like?)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 3:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_030");
    MsgDisp("Kazama","It's nice, handmade chocolate.");
    MsgDisp("主人公","I tried putting some effort in.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_040");
    MsgDisp("Kazama","I can tell from how it looks.
Thanks.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_050");
    MsgDisp("Kazama","Well, there's such a thing as
trying too hard, you know?
Well, that's just like you, though.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Oh, could it be that
I put something in that ｛風真＊＊｝
doesn't like??)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_060");
    MsgDisp("Kazama","It looks like you put your all
into these.");
    MsgDisp("主人公","Yeah, they're handmade.");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,1);
    VoicePlay("L040100005_01_070");
    MsgDisp("Kazama","Let's see...... Hm?
Well, I can see how serious you were.");
    MsgDisp("主人公","......Was it too much?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100005_01_080");
    MsgDisp("Kazama","No, that's not it.
It's about the feelings in it.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100005_01_090");
    MsgDisp("Kazama","I'll accept whatever feelings
you have.
Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(......Ah, could it be that
I put something he didn't like in?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
