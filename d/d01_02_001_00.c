BGOpen("sc623",0);
BGMPlay("BGM_CLUB_IVENT",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Today is the final day of interhigh.
This is the senior's last match.
Let's cheer as hard as we can!)");
MsgClose();
ChOpen(2,37,3,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("D010200100_02_000");
MsgDisp("Sassa","｛主人公｝.
Do you have anything to carry?
Let me help you.");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Thank you, but I'm fine.");
ChEye(2,0);
ChMouth(2,0);
VoicePlay("D010200100_39_000");
MsgDisp("Manager","Oy, Sassa.
You're still an athlete, even though 
it's your first year. Warm up properly.");
ChMotion(2,2);
VoicePlay("D010200100_40_010");
MsgDisp("Member","But Captain, I guess Sassa doesn't even
need to warm up. 
......Right?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("D010200100_02_010");
MsgDisp("Sassa","It's not like that......I also have to
try my best you know......");
VoicePlay("D010200100_40_020");
MsgDisp("Member","That's all you need to win, huh?
That makes us look like idiots.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("D010200100_02_020");
MsgDisp("Sassa","............");
MsgDisp("主人公","(｛颯砂＊＊｝......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc625",0);
ScrFadeIn(0);
MsgDisp("主人公","The final event, the 1500 meter race......
｛颯砂＊＊｝, good luck!");
VoicePlay("D010200100_40_030");
MsgDisp("Member","With such a large gap in scores, even
if he just runs however, he'll win.");
MsgDisp("主人公","What......?");
VoicePlay("D010200100_40_040");
MsgDisp("Member","That guy will win no matter what.
He's going for first place.");
VoicePlay("D010200100_39_050");
MsgDisp("Manager","I keep telling him that the Octathalon
isn't supposed to be like this, but
he doesn't listen.");
MsgDisp("主人公","(I see......)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60);
SEPlay("EV_SE_GAYA_021");
SEPlay("EV_SE_CLAP_002",0,0.5);
SEPlay("EV_SE_CLAP_004",0,0.2);
MsgDisp("主人公","｛颯砂＊＊｝!
Congratulations∈");
MsgClose();
BGMPlay("BGM_C02_SASSA_I",0.01);
StlOpen("ev_02_06");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝, you did it!");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200100_02_030");
MsgDisp("Sassa","Yep, thank you.");
VoicePlay("D010200100_47_000");
MsgDisp("Broadcast","Officiates and athletes please prepare
for the closing ceremony.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5);
VoicePlay("D010200100_02_040");
MsgDisp("Sassa","See you later then!");
SEStop("EV_SE_GAYA_021",2);
SEStop("EV_SE_CLAP_002",2);
SEStop("EV_SE_CLAP_004",2);
BGMStop(2);
MsgClose();
ScrFadeOut(0);
StlClose();
Wait(60);
MsgDisp("主人公","(｛颯砂＊＊｝ somehow didn't
seem too happy......)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc624",0);
ScrFadeIn(0);
VoicePlay("D010200100_40_070");
MsgDisp("Member","Don't be so greedy, you should be
happy.");
VoicePlay("D010200100_02_050");
MsgDisp("Sassa","But I want to get first place in every
event......");
MsgDisp("主人公","(Eh......Was that ｛颯砂＊＊｝'s
voice just now?)");
VoicePlay("D010200100_39_080");
MsgDisp("Manager","That's enough. Sassa is just competing
on a different level from us. Nothing
we say will change his mind.");
VoicePlay("D010200100_02_060");
MsgDisp("Sassa","I......I just want to be the best.
I'm a track and field idiot......");
VoicePlay("D010200100_40_090");
MsgDisp("Member","How is that fine? It's our last year.
If you win them all, then the losers
won't get any recognition.");
VoicePlay("D010200100_39_100");
MsgDisp("Manager","Whatever, it's fine.
Sassa, get dressed and let's go.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C02_SASSA_C",0.01);
ChOpen(2,37,5,5,0,#1,#1,0,0);
VoicePlay("D010200100_02_070");
MsgDisp("Sassa","∋");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("D010200100_02_080");
MsgDisp("Sassa","Good work today.");
MsgDisp("主人公","｛颯砂＊＊｝......
You know, congrats on winning.");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200100_02_090");
MsgDisp("Sassa","Yeah.
I thought it would be a big deal to win
all of the events, but it wasn't at all.");
MsgDisp("主人公","No, that's not true.
I think it's really amazing.");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("D010200100_02_100");
MsgDisp("Sassa","I'm happy to hear you say that......
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(2);
MsgDisp("主人公","(Even though he won, 
｛颯砂＊＊｝ looks sad......)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(2,0);
