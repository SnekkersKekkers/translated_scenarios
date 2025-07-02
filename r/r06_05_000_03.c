switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,34,0,0,4,-1,-1,0,0);
    VoicePlay("R060500003_05_000");
    MsgDisp("Hiiragi","The gift you got...
that's the one I brought.");
    MsgDisp("主人公","Huh!
...Ah, ｛柊＊＊＊｝, you also got the gift
that I brought!");
    ChMotion(5,4);
    VoicePlay("R060500003_05_010");
    MsgDisp("Hiiragi","I didn't think that would be possible.
Coincidences are incredible.");
    MsgDisp("主人公","Open your gift!");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,34,4,4,4,-1,-1,0,0);
    VoicePlay("R060500003_05_020");
    MsgDisp("Hiiragi","I never thought that you
would get it.");
    MsgDisp("主人公","Hmm?
Ah, by any chance, is this...");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("R060500003_05_030");
    MsgDisp("Hiiragi","Yeah, that's the gift I brought.
...Could it be that I also got
your gift?");
    MsgDisp("主人公","∋
Yeah, that's my gift!");
    ChMotion(5,0);
    VoicePlay("R060500003_05_040");
    MsgDisp("Hiiragi","You've got a nice eye.
Habataki's Santa-san does too.");
    MsgDisp("主人公","Yeah, shall we open our gifts?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,34,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("R060500003_05_050");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Isn't this wrapping so nice?");
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("R060500003_05_060");
    MsgDisp("Hiiragi","A small miracle by this holy night.
Gifts brought with you in mind
really will come to you.");
    MsgDisp("主人公","Huh, then,
｛柊＊＊＊｝, is this your...?");
    ChMotion(5,0);
    VoicePlay("R060500003_05_070");
    MsgDisp("Hiiragi","Yeah.");
    MsgDisp("主人公","Ah, that present!
You also got my...");
    ChEye(5,3);
    ChMouth(5,2);
    VoicePlay("R060500003_05_080");
    MsgDisp("Hiiragi","…………");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("R060500003_05_090");
    MsgDisp("Hiiragi","Hehe, so that's what happened, huh.
The student council handles the
gift exchange...");
    MsgDisp("主人公","Huh... Could it be that you,
｛柊＊＊＊｝...");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("R060500003_05_100");
    MsgDisp("Hiiragi","No, I wouldn't be so selfish.
On a night like this, it was a miracle.
That's all.");
    VoicePlay("R060500003_05_110");
    MsgDisp("Hiiragi","Is it okay if we open our
presents, now?");
    MsgDisp("主人公","Of course!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
