MsgClose();
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,254,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Oh, ｛御影＊＊｝, what are you doing?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("J040700000_07_000");
MsgDisp("Mikage","What do you mean? I'm enjoying my high
school life!");
MsgDisp("主人公","Phew, that sounds like fun.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("J040700000_07_010");
MsgDisp("Mikage","So,
you......");
MsgDisp("主人公","Ah, ｛御影＊＊｝.
Is there somewhere you want to go?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("J040700000_07_020");
MsgDisp("Mikage","Something like that.
Are you free on your next break?");
MsgSel("Yes, I'm available.", "I'm sorry, I have some business to attend to.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("J040700000_07_030");
    MsgDisp("Mikage","Oh, I see.
I'll see you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(｛御影＊＊｝ I guess I should have kept
him company......)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
