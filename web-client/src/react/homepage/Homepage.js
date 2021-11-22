import { useState } from 'react'

import ExampleTextProps from '../_common/ExampleTextProps'
import RedirectButton from '../_common/navigation/RedirectButton'

export default function Homepage() {

  const [goAuth, setGoToAuth] = useState(false)

  return (
    <>
      <ExampleTextProps text={"Homepage"} />
      <RedirectButton
        text={"Authentication"}
        redirect={goAuth}
        destination={""}
        onClick={() => setGoToAuth(true)}
      />
    </>
  )
  
}
