ChLayout(1);
BGOpen("sc510",1);
ScrFadeIn(0);
MsgDisp("主人公","(It's already this late......)");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_DOOR_019");
Wait(10,0);
BGOpen("sc300",1);
ScrFadeIn(0);
MsgDisp("主人公","(Everyone already left......
I should go home quickly, too.)");
SEPlay("EV_SE_594",0,0.5);
Wait(30,0);
MsgDisp("主人公","Eh∋
W-What......∋");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_512",1,0.5);
Wait(65,0);
StlOpen("ev_07_09");
StlEye(7,1);
StlMouth(7,0);
StlEyeOpenLevel(7,0,1);
BGMPlay("BGM_C07_MIKAGE_B",0.01);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","∈ ｛御影＊＊｝......! What's wrong?");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("D010700200_07_000");
MsgDisp("Mikage","Oh, it's you, huh?
My hair tie fell off somewhere......");
StlEye(7,1,0);
StlMouth(7,1);
StlEyeOpenLevel(7,5,1);
VoicePlay("D010700200_07_010");
MsgDisp("Mikage","I can't seem to find it anywhere～");
MsgDisp("主人公","Ah, that's......");
StlEye(7,0,0);
StlMouth(7,0);
StlEyeOpenLevel(7,5,1);
VoicePlay("D010700200_07_020");
MsgDisp("Mikage","Hmm?　That's what?");
MsgDisp("主人公","That gives you a different vibe from
usual.");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("D010700200_07_030");
MsgDisp("Mikage","Really?
Hmm......");
StlEye(7,0);
StlMouth(7,1);
VoicePlay("D010700200_07_040");
MsgDisp("Mikage","Different in what kind of way?");
MsgDisp("主人公","Uhm......In a good way.");
StlEye(7,0);
StlMouth(7,0);
StlEyeOpenLevel(7,5);
VoicePlay("D010700200_07_050");
MsgDisp("Mikage","Eh, you prefer me like this?");
StlEye(7,0,0);
StlMouth(7,0);
StlEyeOpenLevel(7,0,1);
VoicePlay("D010700200_07_060");
MsgDisp("Mikage","Ok then, that's enough searching for
today.
I'll leave it like this for now.");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_677",0.8,0.4);
Wait(50,0);
SEPlay("EV_SE_621");
SEWait();
BGMStop(3);
StlClose();
BGOpen("sc510",1);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ScrFadeIn(0);
VoicePlay("D010700200_07_070");
MsgDisp("Mikage","You should hurry home nowー!");
MsgDisp("主人公","Ah, yes sir!");
MsgDisp("主人公","(｛御影＊＊｝ left. I hope they don't
scold him in the staff room......But he
looks kind of cool, huh?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
