//
// Created by Yossi Levi on 08/06/2019.
//

#include <iostream>
#include <string.h>
using std::string;
#include "../eurovision.h"

using std::cout;
using std::endl;



void TEST4(){
    freopen ("../test4myresult.txt","w",stdout);
    MainControl eurovision;
    Participant p1("kazakhastan","song_kazakhastan",125,"singer_kazakhastan");
    cout<<p1<<endl;
    Participant p2("malta","song_malta",126,"singer_malta");
    cout<<p2<<endl;
    Participant p3("armenia","song_armenia",118,"singer_armenia");
    cout<<p3<<endl;
    Participant p4("ukraine","song_ukraine",114,"singer_ukraine");
    cout<<p4<<endl;
    Participant p5("andora","song_andora",170,"singer_andora");
    cout<<p5<<endl;
    Participant p6("cyrpus","song_cyrpus",190,"singer_cyrpus");
    cout<<p6<<endl;
    Participant p7("luxembourg","song_luxembourg",226,"singer_luxembourg");
    cout<<p7<<endl;
    Participant p8("ireland","song_ireland",200,"singer_ireland");
    cout<<p8<<endl;
    Participant p9("armenia","song_armenia",118,"singer_armenia");
    cout<<p9<<endl;
    Participant p10("georgia","song_georgia",137,"singer_georgia");
    cout<<p10<<endl;
    Participant p11("slovenia","song_slovenia",221,"singer_slovenia");
    cout<<p11<<endl;
    Participant p12("croatia","song_croatia",124,"singer_croatia");
    cout<<p12<<endl;
    Participant p13("andora","song_andora",113,"singer_andora");
    cout<<p13<<endl;
    Participant p14("georgia","song_georgia",147,"singer_georgia");
    cout<<p14<<endl;
    Participant p15("belarus","song_belarus",144,"singer_belarus");
    cout<<p15<<endl;
    Participant p16("bulgaria","song_bulgaria",143,"singer_bulgaria");
    cout<<p16<<endl;
    Participant p17("luxembourg","song_luxembourg",216,"singer_luxembourg");
    cout<<p17<<endl;
    Participant p18("cyrpus","song_cyrpus",213,"singer_cyrpus");
    cout<<p18<<endl;
    Participant p19("france","song_france",177,"singer_france");
    cout<<p19<<endl;
    Participant p20("estonia","song_estonia",225,"singer_estonia");
    cout<<p20<<endl;
    Participant p21("uk","song_uk",180,"singer_uk");
    cout<<p21<<endl;
    Participant p22("armenia","song_armenia",204,"singer_armenia");
    cout<<p22<<endl;
    Participant p23("croatia","song_croatia",105,"singer_croatia");
    cout<<p23<<endl;
    Participant p24("sweden","song_sweden",211,"singer_sweden");
    cout<<p24<<endl;
    Participant p25("spain","song_spain",105,"singer_spain");
    cout<<p25<<endl;
    Participant p26("hungary","song_hungary",158,"singer_hungary");
    cout<<p26<<endl;
    Participant p27("hungary","song_hungary",223,"singer_hungary");
    cout<<p27<<endl;
    Participant p28("russia","song_russia",107,"singer_russia");
    cout<<p28<<endl;
    Participant p29("turkey","song_turkey",183,"singer_turkey");
    cout<<p29<<endl;
    Participant p30("russia","song_russia",143,"singer_russia");
    cout<<p30<<endl;
    Participant p31("serbia","song_serbia",149,"singer_serbia");
    cout<<p31<<endl;
    Participant p32("bulgaria","song_bulgaria",226,"singer_bulgaria");
    cout<<p32<<endl;
    Participant p33("israel","song_israel",146,"singer_israel");
    cout<<p33<<endl;
    Participant p34("luxembourg","song_luxembourg",124,"singer_luxembourg");
    cout<<p34<<endl;
    Participant p35("italy","song_italy",108,"singer_italy");
    cout<<p35<<endl;
    Participant p36("lithiania","song_lithiania",136,"singer_lithiania");
    cout<<p36<<endl;
    p19.update("new_song",0,"");
    p24.update("new_song",0,"");
    p3.update("new_song",0,"");
    p18.update("new_song",0,"");
    p9.update("new_song",0,"newsinger");
    p22.update("new_song",0,"newsinger");
    p6.update("new_song",0,"newsinger");
    p12.update("new_song",0,"newsinger");
    p9.update("new_song",102,"newsinger");
    p2.update("new_song",110,"newsinger");
    p20.update("new_song",129,"newsinger");
    p20.update("new_song",100,"newsinger");
    cout<<eurovision<<endl;
    eurovision+=p15;
    eurovision+=p26;
    eurovision+=p26;
    eurovision+=p29;
    eurovision+=p31;
    eurovision+=p9;
    eurovision+=p10;
    eurovision+=p33;
    eurovision+=p13;
    eurovision+=p8;
    eurovision+=p9;
    eurovision+=p24;
    eurovision+=p25;
    eurovision+=p27;
    cout<<eurovision<<endl;
    eurovision+=p30;
    eurovision-=p26;
    eurovision+=p18;
    eurovision-=p33;
    eurovision-=p10;
    eurovision+=p33;
    eurovision-=p25;
    eurovision-=p15;
    eurovision-=p21;
    eurovision-=p35;
    eurovision-=p4;
    eurovision-=p20;
    eurovision+=p31;
    eurovision+=p28;
    eurovision+=p19;
    eurovision+=p12;
    eurovision-=p7;
    eurovision+=p16;
    eurovision-=p16;
    eurovision-=p5;
    eurovision-=p34;
    eurovision+=p17;
    eurovision+=p22;
    eurovision-=p7;
    cout<<eurovision<<endl;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    std::cout<<eurovision.participate("israel")<<std::endl;
    std::cout<<eurovision.participate("belgium")<<std::endl;
    std::cout<<eurovision.participate("kazakhastan")<<std::endl;
    std::cout<<eurovision.participate("andora")<<std::endl;
    std::cout<<eurovision.participate("croatia")<<std::endl;
    std::cout<<eurovision.participate("slovakia")<<std::endl;
    std::cout<<eurovision.participate("armenia")<<std::endl;
    std::cout<<eurovision.participate("france")<<std::endl;
    std::cout<<eurovision.participate("sweden")<<std::endl;
    std::cout<<eurovision.participate("netherlands")<<std::endl;
    std::cout<<eurovision.participate("norway")<<std::endl;
    std::cout<<eurovision.participate("austria")<<std::endl;
    std::cout<<eurovision.participate("slovakia")<<std::endl;
    std::cout<<eurovision.participate("israel")<<std::endl;
    p13.update("",120,"");
    cout<<p13<<endl;
    p18.update("",120,"");
    cout<<p18<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p20.update("",120,"");
    cout<<p20<<endl;
    p27.update("",120,"");
    cout<<p27<<endl;
    p18.update("",120,"");
    cout<<p18<<endl;
    p1.update("",120,"");
    cout<<p1<<endl;
    p23.update("",120,"");
    cout<<p23<<endl;
    p5.update("",120,"");
    cout<<p5<<endl;
    p33.update("",120,"");
    cout<<p33<<endl;
    p5.update("",120,"");
    cout<<p5<<endl;
    p15.update("",120,"");
    cout<<p15<<endl;
    p2.update("",120,"");
    cout<<p2<<endl;
    p35.update("",120,"");
    cout<<p35<<endl;
    Voter v1("uk",Judge);
    Voter v2("norway",Regular);
    Voter v3("moldova",Regular);
    Voter v4("cyrpus");
    Voter v5("norway");
    Voter v6("malta");
    Voter v7("kazakhastan",Judge);
    Voter v8("malta",Regular);
    Voter v9("ukraine",Judge);
    Voter v10("hungary",Regular);
    Voter v11("slovakia",Judge);
    Voter v12("slovenia",Regular);
    Voter v13("israel",Judge);
    Voter v14("latvia");
    Voter v15("kazakhastan");
    Voter v16("spain",Regular);
    Voter v17("lithiania");
    Voter v18("armenia",Judge);
    Voter v19("russia",Judge);
    Voter v20("italy");
    Voter v21("greece",Regular);
    Voter v22("norway",Regular);
    Voter v23("belarus");
    Voter v24("uk");
    Voter v25("israel",Judge);
    Voter v26("germany",Regular);
    Voter v27("cyrpus",Judge);
    Voter v28("latvia",Judge);
    Voter v29("uk",Judge);
    Voter v30("bosnia",Judge);
    Voter v31("turkey",Judge);
    Voter v32("italy",Regular);
    Voter v33("serbia");
    Voter v34("spain",Regular);
    Voter v35("uk");
    Voter v36("kazakhastan",Regular);
    Voter v37("estonia",Judge);
    Voter v38("andora",Judge);
    Voter v39("luxembourg",Judge);
    Voter v40("luxembourg",Judge);
    Voter v41("switzerland",Regular);
    Voter v42("turkey");
    Voter v43("cyrpus",Judge);
    Voter v44("ukraine",Regular);
    Voter v45("greece",Judge);
    Voter v46("armenia");
    Voter v47("israel",Judge);
    Voter v48("switzerland",Regular);
    Voter v49("armenia");
    Voter v50("turkey");
    Voter v51("italy",Judge);
    Voter v52("israel");
    Voter v53("germany",Regular);
    Voter v54("turkey",Regular);
    Voter v55("latvia",Judge);
    Voter v56("moldova",Regular);
    Voter v57("lithiania");
    Voter v58("slovakia");
    Voter v59("netherlands",Judge);
    Voter v60("belgium",Regular);
    Voter v61("estonia",Regular);
    Voter v62("netherlands",Judge);
    Voter v63("turkey",Judge);
    Voter v64("switzerland",Regular);
    Voter v65("norway",Regular);
    Voter v66("germany",Judge);
    Voter v67("latvia",Judge);
    Voter v68("greece",Regular);
    Voter v69("ukraine",Judge);
    Voter v70("switzerland");
    Voter v71("hungary",Judge);
    Voter v72("greece",Judge);
    Voter v73("belarus",Regular);
    Voter v74("bosnia",Regular);
    Voter v75("hungary",Regular);
    Voter v76("hungary");
    Voter v77("switzerland");
    Voter v78("ireland");
    Voter v79("georgia",Regular);
    Voter v80("kazakhastan",Regular);
    Voter v81("spain",Regular);
    Voter v82("norway",Judge);
    Voter v83("switzerland",Judge);
    Voter v84("cyrpus",Regular);
    Voter v85("bulgaria");
    Voter v86("turkey");
    Voter v87("ukraine",Judge);
    Voter v88("sweden",Regular);
    Voter v89("hungary",Judge);
    Voter v90("slovenia");
    Voter v91("netherlands");
    Voter v92("russia",Regular);
    Voter v93("uk",Judge);
    Voter v94("croatia",Regular);
    Voter v95("bulgaria",Judge);
    Voter v96("france",Judge);
    Voter v97("hungary",Judge);
    Voter v98("serbia",Regular);
    Voter v99("slovenia");
    cout<<eurovision<<endl;
    eurovision+=Vote(v16,"bulgaria");
    eurovision+=Vote(v95,"russia","georgia","lithiania");
    eurovision+=Vote(v44,"latvia");
    eurovision+=Vote(v57,"greece");
    eurovision+=Vote(v41,"lithiania");
    eurovision+=Vote(v80,"israel");
    eurovision+=Vote(v13,"germany","belarus");
    eurovision+=Vote(v57,"malta");
    eurovision+=Vote(v19,"turkey","belgium","israel","spain","georgia");
    eurovision+=Vote(v69,"estonia","slovenia","cyrpus","hungary","kazakhastan","switzerland");
    eurovision+=Vote(v36,"malta");
    eurovision+=Vote(v36,"georgia");
    eurovision+=Vote(v31,"netherlands","slovakia","ukraine","belgium","norway","bulgaria","russia");
    eurovision+=Vote(v42,"armenia");
    eurovision+=Vote(v62,"norway","belgium","ireland","sweden","croatia");
    eurovision+=Vote(v40,"turkey","croatia");
    eurovision+=Vote(v62,"norway","norway","spain","ireland","france","germany","armenia");
    eurovision+=Vote(v85,"switzerland");
    eurovision+=Vote(v47,"netherlands","belgium","ireland","greece");
    eurovision+=Vote(v24,"ireland");
    eurovision+=Vote(v38,"moldova","israel");
    eurovision+=Vote(v3,"moldova");
    eurovision+=Vote(v11,"spain","netherlands","norway","lithiania","greece","belarus","italy","ukraine","belgium");
    eurovision+=Vote(v42,"lithiania");
    eurovision+=Vote(v43,"slovakia","croatia","moldova","russia","ukraine","armenia","germany","cyrpus");
    eurovision+=Vote(v62,"italy","israel");
    eurovision+=Vote(v94,"kazakhastan");
    eurovision+=Vote(v73,"serbia");
    eurovision+=Vote(v57,"france");
    eurovision+=Vote(v53,"slovenia");
    eurovision+=Vote(v34,"armenia");
    eurovision+=Vote(v30,"spain","norway","cyrpus");
    eurovision+=Vote(v98,"france");
    eurovision+=Vote(v88,"ukraine");
    eurovision+=Vote(v23,"norway");
    eurovision+=Vote(v74,"greece");
    eurovision+=Vote(v66,"turkey","slovenia","belgium");
    eurovision+=Vote(v84,"malta");
    eurovision+=Vote(v19,"latvia","latvia","russia","belgium","andora");
    eurovision+=Vote(v84,"armenia");
    eurovision+=Vote(v51,"sweden","croatia","kazakhastan");
    eurovision+=Vote(v70,"israel");
    eurovision+=Vote(v56,"israel");
    eurovision+=Vote(v12,"andora");
    eurovision+=Vote(v76,"slovenia");
    eurovision+=Vote(v9,"netherlands","netherlands","switzerland","lithiania","serbia","malta","bosnia","croatia","andora");
    eurovision+=Vote(v55,"france","armenia");
    eurovision+=Vote(v93,"moldova","andora","netherlands","hungary");
    eurovision+=Vote(v32,"russia");
    eurovision+=Vote(v88,"netherlands");
    eurovision+=Vote(v37,"andora","switzerland","germany");
    eurovision+=Vote(v9,"ireland","serbia");
    eurovision+=Vote(v68,"turkey");
    eurovision+=Vote(v16,"austria");
    eurovision+=Vote(v95,"belgium","malta","serbia","moldova","georgia","latvia","switzerland");
    eurovision+=Vote(v88,"germany");
    eurovision+=Vote(v27,"netherlands","armenia","serbia","cyrpus");
    eurovision+=Vote(v51,"turkey","croatia","bulgaria","switzerland","bosnia","turkey");
    eurovision+=Vote(v45,"greece","ireland","netherlands","greece","luxembourg","austria","cyrpus","andora","switzerland");
    eurovision+=Vote(v79,"italy");
    eurovision+=Vote(v41,"belarus");
    eurovision+=Vote(v70,"latvia");
    eurovision+=Vote(v18,"ireland","serbia","armenia","luxembourg","cyrpus");
    eurovision+=Vote(v69,"latvia","ireland","netherlands","turkey","ukraine","malta");
    eurovision+=Vote(v7,"turkey","moldova","ukraine");
    eurovision+=Vote(v9,"croatia","ireland","estonia");
    eurovision+=Vote(v45,"moldova","ukraine","bosnia","sweden","ireland");
    eurovision+=Vote(v47,"latvia","bosnia","cyrpus","hungary","georgia","serbia","andora","armenia");
    eurovision+=Vote(v80,"bosnia");
    eurovision+=Vote(v41,"armenia");
    eurovision+=Vote(v75,"france");
    eurovision+=Vote(v99,"luxembourg");
    eurovision+=Vote(v15,"moldova");
    eurovision+=Vote(v26,"france");
    eurovision+=Vote(v29,"moldova","hungary");
    eurovision+=Vote(v86,"moldova");
    eurovision+=Vote(v18,"italy","netherlands","spain","switzerland","belarus","austria","ukraine","italy","luxembourg");
    eurovision+=Vote(v23,"italy");
    eurovision+=Vote(v72,"slovakia","spain","georgia","andora","kazakhastan","belarus","norway","sweden","italy");
    eurovision+=Vote(v69,"norway","ireland","spain","greece","moldova","belarus","armenia","georgia","bosnia","norway");
    eurovision+=Vote(v55,"armenia","spain","cyrpus","armenia","slovakia","serbia");
    eurovision+=Vote(v35,"bulgaria");
    eurovision+=Vote(v90,"belarus");
    eurovision+=Vote(v90,"andora");
    eurovision+=Vote(v26,"slovakia");
    eurovision+=Vote(v28,"greece","lithiania","bosnia","georgia","croatia","belarus","andora","slovenia");
    eurovision+=Vote(v73,"ukraine");
    eurovision+=Vote(v77,"malta");
    eurovision+=Vote(v86,"austria");
    eurovision+=Vote(v63,"malta","sweden","italy");
    eurovision+=Vote(v51,"belgium","lithiania","serbia","netherlands");
    eurovision+=Vote(v7,"greece","estonia","slovenia","norway","switzerland","israel");
    eurovision+=Vote(v63,"turkey","norway","austria","georgia","bulgaria","russia");
    eurovision+=Vote(v19,"moldova","malta","france","russia","spain","georgia");
    eurovision+=Vote(v78,"france");
    eurovision+=Vote(v31,"andora","malta","netherlands","bulgaria","israel","greece","luxembourg");
    eurovision+=Vote(v52,"turkey");
    eurovision+=Vote(v73,"greece");
    eurovision+=Vote(v44,"kazakhastan");
    eurovision+=Vote(v3,"spain");
    eurovision+=Vote(v68,"malta");
    eurovision+=Vote(v75,"israel");
    eurovision+=Vote(v10,"croatia");
    eurovision+=Vote(v64,"moldova");
    eurovision+=Vote(v3,"sweden");
    eurovision+=Vote(v81,"greece");
    eurovision+=Vote(v57,"bosnia");
    eurovision+=Vote(v46,"belarus");
    eurovision+=Vote(v18,"andora","bosnia","bulgaria","belarus","malta");
    eurovision+=Vote(v70,"norway");
    eurovision+=Vote(v92,"france");
    eurovision+=Vote(v58,"belarus");
    eurovision+=Vote(v57,"turkey");
    eurovision+=Vote(v9,"sweden","cyrpus","spain","belgium","moldova","ireland","norway","belarus","france","luxembourg");
    eurovision+=Vote(v80,"italy");
    eurovision+=Vote(v2,"bulgaria");
    eurovision+=Vote(v50,"belarus");
    eurovision+=Vote(v36,"france");
    eurovision+=Vote(v5,"sweden");
    eurovision+=Vote(v54,"italy");
    eurovision+=Vote(v64,"georgia");
    eurovision+=Vote(v48,"lithiania");
    eurovision+=Vote(v93,"serbia","latvia","germany","belgium","kazakhastan","andora","italy","greece","ireland","malta");
    eurovision+=Vote(v24,"armenia");
    eurovision+=Vote(v86,"hungary");
    eurovision+=Vote(v70,"turkey");
    eurovision+=Vote(v14,"slovakia");
    eurovision+=Vote(v23,"serbia");
    eurovision+=Vote(v37,"russia","italy","sweden");
    eurovision+=Vote(v78,"slovenia");
    eurovision+=Vote(v60,"moldova");
    eurovision+=Vote(v87,"netherlands","switzerland","spain","croatia","france","malta","latvia","cyrpus");
    eurovision+=Vote(v22,"serbia");
    eurovision+=Vote(v34,"ireland");
    eurovision+=Vote(v29,"croatia","moldova");
    eurovision+=Vote(v8,"slovenia");
    eurovision+=Vote(v97,"belarus","belarus","slovakia","luxembourg","bosnia","ukraine","france");
    eurovision+=Vote(v76,"estonia");
    eurovision+=Vote(v86,"croatia");
    eurovision+=Vote(v42,"armenia");
    eurovision+=Vote(v45,"moldova","france","lithiania","bosnia");
    eurovision+=Vote(v37,"estonia","estonia","italy","kazakhastan","slovenia","france","cyrpus","serbia","ireland","slovakia");
    eurovision+=Vote(v43,"andora","bosnia","armenia","estonia","serbia","slovenia");
    eurovision+=Vote(v28,"turkey","austria","hungary","bosnia","ukraine");
    eurovision+=Vote(v98,"latvia");
    eurovision+=Vote(v82,"ukraine","kazakhastan","slovenia","andora","italy");
    eurovision+=Vote(v9,"norway","cyrpus","austria");
    eurovision+=Vote(v23,"kazakhastan");
    eurovision+=Vote(v54,"israel");
    eurovision+=Vote(v34,"malta");
    eurovision+=Vote(v62,"spain","malta","netherlands","armenia","bulgaria");
    eurovision+=Vote(v24,"france");
    eurovision+=Vote(v10,"germany");
    eurovision+=Vote(v62,"malta","kazakhastan","moldova","georgia");
    eurovision+=Vote(v66,"israel","latvia","ukraine","bosnia","kazakhastan","andora","serbia","italy");
    eurovision+=Vote(v33,"croatia");
    eurovision+=Vote(v83,"spain","italy","slovenia","turkey","serbia","bosnia","hungary");
    eurovision+=Vote(v79,"germany");
    eurovision+=Vote(v95,"lithiania","bulgaria","spain","serbia","russia");
    eurovision+=Vote(v37,"moldova","bosnia","france","armenia","ireland","estonia","belgium");
    eurovision+=Vote(v61,"slovakia");
    eurovision+=Vote(v7,"moldova","cyrpus","greece","moldova","turkey","lithiania","switzerland","spain","georgia");
    eurovision+=Vote(v62,"spain","bulgaria","sweden","luxembourg","turkey","andora","croatia","georgia","switzerland","kazakhastan");
    eurovision+=Vote(v57,"ukraine");
    eurovision+=Vote(v35,"lithiania");
    eurovision+=Vote(v17,"norway");
    eurovision+=Vote(v21,"netherlands");
    eurovision+=Vote(v42,"spain");
    eurovision+=Vote(v95,"ireland","israel","austria","croatia","france","belgium","luxembourg","slovakia","kazakhastan");
    eurovision+=Vote(v93,"latvia","armenia","spain","israel","ireland","france","belarus");
    eurovision+=Vote(v65,"switzerland");
    eurovision+=Vote(v24,"latvia");
    eurovision+=Vote(v92,"israel");
    eurovision+=Vote(v20,"belgium");
    eurovision+=Vote(v9,"turkey","sweden","slovenia","malta","hungary","greece");
    eurovision+=Vote(v52,"norway");
    eurovision+=Vote(v59,"serbia","lithiania","slovakia","netherlands","france");
    eurovision+=Vote(v40,"serbia","kazakhastan","austria","italy","moldova","malta","luxembourg","belarus","norway");
    eurovision+=Vote(v5,"italy");
    eurovision+=Vote(v43,"italy","germany","israel","cyrpus","netherlands","slovenia","luxembourg","hungary","ireland");
    eurovision+=Vote(v51,"ireland","germany","belgium","latvia","andora","israel","italy","lithiania");
    eurovision+=Vote(v95,"moldova","ukraine","france","serbia","malta","cyrpus","turkey");
    eurovision+=Vote(v59,"cyrpus","greece","luxembourg","georgia","switzerland","moldova","bulgaria");
    eurovision+=Vote(v36,"germany");
    eurovision+=Vote(v52,"bosnia");
    eurovision+=Vote(v37,"netherlands","croatia","armenia","hungary","ukraine");
    eurovision+=Vote(v67,"belgium","croatia","slovenia","moldova","greece");
    eurovision+=Vote(v49,"belarus");
    eurovision+=Vote(v29,"slovenia","lithiania","kazakhastan","greece","spain","malta","bulgaria","serbia","netherlands");
    eurovision+=Vote(v61,"slovakia");
    eurovision+=Vote(v21,"austria");
    eurovision+=Vote(v60,"switzerland");
    eurovision+=Vote(v52,"moldova");
    eurovision+=Vote(v41,"kazakhastan");
    eurovision+=Vote(v17,"malta");
    eurovision+=Vote(v53,"sweden");
    eurovision+=Vote(v89,"latvia","netherlands","spain","lithiania","russia","france","slovenia","hungary");
    eurovision+=Vote(v30,"netherlands","switzerland");
    eurovision+=Vote(v40,"belarus","austria","france","bosnia","latvia","netherlands","belarus","russia");
    cout<<eurovision<<endl;

}
