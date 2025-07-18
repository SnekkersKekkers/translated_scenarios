ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
MsgSel("Yes, I understand.","I'm sorry. I'll pass.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Let's see, the meeting place is
｛待ち合わせ場所｝ Is that
okay?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("J060700000_07_000");
    MsgDisp("Mikage","Oh, well, I'm counting on you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(｛御影＊＊｝ said we are going to go hang
out together. It's like a date, but a
little more exciting!)");
    SEStop("EV_SE_GAYA_018",1);
    break ;
    case 1:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("J060700000_07_010");
    MsgDisp("Mikage","Oh, I see.
Well, I can't help it.
See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(He went to the trouble of inviting me,
Did I do something wrong?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_GAYA_018",1);
MsgClose();
ScrFadeOut(0);
