BGOpen("sc623",0);
BGMPlay("BGM_CLUB_IVENT",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(We're at the National Track and Field
Tournament! Just now I saw
｛颯砂＊＊｝ surrounded by
reporters.)");
MsgDisp("主人公","(Isn't ｛大地＊＊｝ also here
today?
I wonder which events he'll do?)");
VoicePlay("D010800200_46_000");
MsgDisp("Broadcast","All athletes participating in the men's
400m Octathlon, please come to the
starting area.");
MsgDisp("主人公","Ah...It's ｛颯砂＊＊｝'s turn to
compete in the Octathalon. Let's go watch!");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc625",0);
ScrFadeIn(0);
VoicePlay("D010800200_39_010");
MsgDisp("Referee","On your marks.
Get set...");
SEPlay("EV_SE_612");
Wait(20,0);
SEPlay("EV_SE_GAYA_003",0.5);
SEPlay("EV_SE_792",0.5);
SEPlay("EV_SE_847",0.5);
MsgDisp("主人公","(Woah, everyone is so fast!
Like you'd expect, ｛颯砂＊＊｝
is in the lead!)");
MsgDisp("主人公","(The guy in the orange behind him is also
very fast!
...Wait, is that?)");
SEStop("EV_SE_792",1);
SEStop("EV_SE_847",1);
SEStop("EV_SE_GAYA_003",1);
MsgClose();
ScrFadeOut(0);
Wait(5,0);
StlOpen("ev_08_06");
StlEye(8,0);
StlMouth(8,0);
BGMPlay("BGM_C08_DAICHI_I",0.01,0.6);
SEPlay("EV_SE_791",0.5,0.8);
SEPlay("EV_SE_GAYA_003",0.5);
ScrFadeIn(0);
MsgDisp("主人公","It's ｛大地＊＊｝ ∈");
VoicePlay("D010800200_42_020");
MsgDisp("Male Student","Go Daichi!");
MsgDisp("主人公","(I feel like he might be able to catch up
to ｛颯砂＊＊｝! )");
MsgDisp("主人公","(What should I do...
I don't know who to root for...!)");
SEPlay("EV_SE_793",0.3);
SEPlay("EV_SE_GAYA_011");
MsgDisp("主人公","Try your best!
｛大地＊＊｝,
｛颯砂＊＊｝ ∈");
SEStop("EV_SE_791",2);
SEStop("EV_SE_GAYA_003",2);
SEStop("EV_SE_793",2);
SEStop("EV_SE_GAYA_011",2);
BGMStop(2);
MsgClose();
ScrFadeOut(0);
StlClose();
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc624",0);
ScrFadeIn(0);
MsgDisp("主人公","(｛颯砂＊＊｝ got 1st and
｛大地＊＊｝ got 2nd, huh?
In the end it was a close match...)");
MsgDisp("主人公","(The two of them are really amazing.
My heart is still racing...)");
VoicePlay("D010800200_08_000");
MsgDisp("Shirahane?","Ah...
Ahh!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_C08_DAICHI_A",0.01);
ChOpen(8,254,0,3,3,#1,#1,0,0);
VoicePlay("D010800200_08_010");
MsgDisp("Shirahane","Ya really came!
That makes me happy!");
MsgDisp("主人公","I saw it.
The 400m race was really exciting all the
way to the end!");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,4,1);
VoicePlay("D010800200_08_020");
MsgDisp("Shirahane","Not at all.
I completely lost.");
MsgDisp("主人公","Eh?");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,0,1);
ChEyeOpenLevel(8,10);
VoicePlay("D010800200_08_030");
MsgDisp("Shirahane","I don't think there's anyone in high
school that could compete with Sassa.
He's already a God.");
ChEye(8,2);
ChMouth(8,0);
VoicePlay("D010800200_08_040");
MsgDisp("Shirahane","We both tried our hardest, but I don't
think I'll ever be able to surpass him.");
MsgDisp("主人公","I guess so...");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("D010800200_08_050");
MsgDisp("Shirahane","Yeah, I'm satisfied, though!
After all, the king is a genius!
So I can relax now.");
MsgDisp("主人公","(｛大地＊＊｝ was also amazing, though.
...By king, does he maybe mean
｛颯砂＊＊｝? )");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(8,0,0);
ChPrmTblAdd(8,0);
